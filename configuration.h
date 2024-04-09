#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include <string>

class Configuration
{
public:
    std::string run_label();
    std::string output_directory();
    int last_day();
    int exposed_state_duration();
    long double exchange_rate();
    long double immune_on_arrival();
    int number_of_contact_events_per_day();
    int active_state_duration_1();
    long double transmission_probability_1();
    int active_state_duration_2();
    long double transmission_probability_2();
    int time_of_strain2_appearance();

    static Configuration* instance(); // set the static member values using GUI, DB or whatever
private:
    static Configuration* the_instance;
    Configuration();
public:

};

#endif // CONFIGURATION_H
