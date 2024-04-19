#include "hospital.h"
#include "configuration.h"
#include <math.h>
#include <iostream>
#include <fstream>

Hospital::Hospital(std::ofstream &out)
{
    out  << "day"                << ";"
         << "new_expositions"    << ";"
         << "immune"             << ";"
         << "active_cases_1"     << ";"
         << "new_expositions_1"  << ";"
         << "active_cases_2"     << ";"
         << "new_expositions_2"  << ";"
         << "strain2 %"          << ";"
         << "max_expositions"    << ";"
         << "max_expositions_1"  << ";"
         << "max_expositions_2"  << ";"
         << "\n";

    //
    immune = Configuration::instance()->immune_on_arrival();
    this->out = &out;
    {
        for (int i = 0;
             i < Configuration::instance()->exposed_state_duration()  + Configuration::instance()->active_state_duration_1();
             i++)
        {
            expositions_strain_1.insert(expositions_strain_1.begin(),0);
        }
    }
    expositions_strain_1.insert(expositions_strain_1.begin(),0.0001);
    {
        for (int i = 0;
             i < Configuration::instance()->exposed_state_duration() + Configuration::instance()->active_state_duration_2();
             i++)
        {
            expositions_strain_2.insert(expositions_strain_2.begin(),0);
        }
        expositions_strain_2.insert(expositions_strain_2.begin(),0);
    }
}
double Hospital::go()
{
    double new_expositions = 0.0;
    int today = 0;
    while (today++ < Configuration::instance()->last_day())
    {
        *out << today << ";";
        std::cout << today << ";";
        new_expositions = day();
        night();
        if ((today == Configuration::instance()->time_of_strain2_appearance())
            && Configuration::instance()->transmission_probability_1() < Configuration::instance()->transmission_probability_2()
            )
        {
            expositions_strain_2.insert(expositions_strain_2.begin(),0.0001);
        }
    }
    return new_expositions;
}
double Hospital::day()
{
    long double susceptible = 1; susceptible -= immune;
    long double active_cases_1 = 0;
    long double active_cases_2 = 0;
    long double complement_infection_probability_1 = 1;
    long double complement_infection_probability_2 = 1;
    {
        std::vector<long double>::iterator it = expositions_strain_1.begin()+Configuration::instance()->exposed_state_duration();
        for (int i = 0; i < Configuration::instance()->active_state_duration_1(); i++)
        {
            active_cases_1 += *it++ * pow(1.0-Configuration::instance()->exchange_rate(),Configuration::instance()->exposed_state_duration()+1+i);
        }
        complement_infection_probability_1 = pow((complement_infection_probability_1-active_cases_1*Configuration::instance()->transmission_probability_1()),Configuration::instance()->number_of_contact_events_per_day());
    }
    {
        std::vector<long double>::iterator it = expositions_strain_2.begin()+Configuration::instance()->exposed_state_duration();
        for (int i = 0; i < Configuration::instance()->active_state_duration_2(); i++)
        {
            active_cases_2 += *it++ * pow(1.0-Configuration::instance()->exchange_rate(),Configuration::instance()->exposed_state_duration()+1+i);
        }
        complement_infection_probability_2 = pow((complement_infection_probability_2-active_cases_2*Configuration::instance()->transmission_probability_2()),Configuration::instance()->number_of_contact_events_per_day());
    }
    long double raw_infection_probability_1 = 1; raw_infection_probability_1 -= complement_infection_probability_1;
    long double raw_infection_probability_2 = 1; raw_infection_probability_2 -= complement_infection_probability_2;
    long double new_expositions = 1; new_expositions =(new_expositions - complement_infection_probability_1*complement_infection_probability_2) * susceptible;
    if (new_expositions > max_expositions) { max_expositions = new_expositions; }
    immune += new_expositions;
    double new_expositions_1 = new_expositions * ((new_expositions < 0.00001)? raw_infection_probability_1 : (raw_infection_probability_1/(raw_infection_probability_1+raw_infection_probability_2)));
    expositions_strain_1.insert(expositions_strain_1.begin(),new_expositions_1);
    if (new_expositions_1 > max_expositions_1) { max_expositions_1 = new_expositions_1; }
    double new_expositions_2 = new_expositions * ((new_expositions < 0.00001)? raw_infection_probability_2 : (raw_infection_probability_2/(raw_infection_probability_1+raw_infection_probability_2)));
    if (new_expositions_2 > max_expositions_2) { max_expositions_2 = new_expositions_2; }
    expositions_strain_2.insert(expositions_strain_2.begin(),new_expositions_2);
    *out << new_expositions << ";"
         << immune << ";"
         << active_cases_1     << ";"
         << new_expositions_1  << ";"
         << active_cases_2     << ";"
         << new_expositions_2  << ";"
         << ( new_expositions < 0.00001?0:new_expositions_2 / (new_expositions_1 + new_expositions_2)) << ";"
         << max_expositions  << ";"
         << max_expositions_1  << ";"
         << max_expositions_2  << ";"
         << "\n";
    std::cout << new_expositions << ";"
         << immune << ";"
         << active_cases_1 + active_cases_2 << ";  "
         << active_cases_1     << ";"
         << new_expositions_1  << ";  "
         << active_cases_2     << ";"
         << new_expositions_2  << ";  "
         << ( new_expositions < 0.001?0:new_expositions_2 / (new_expositions_1 + new_expositions_2)) << ";  "
         << max_expositions  << ";"
         << max_expositions_1  << ";"
         << max_expositions_2  << ";"
         << "\n";

    return new_expositions;
}
void Hospital::night()
{
    immune = immune * (1-Configuration::instance()->exchange_rate()) + Configuration::instance()->exchange_rate() * Configuration::instance()->immune_on_arrival();
}
