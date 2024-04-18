#include "configuration.h"
#include <string>

Configuration *Configuration::Configuration::the_instance = nullptr;
Configuration *Configuration::instance()
{
    if (the_instance == nullptr) {
        the_instance = new Configuration();
    }
    return the_instance;
}
Configuration::Configuration()
{ /* do nothing here */
}
#define replace7
#ifdef single1 // 0.019|0.009
std::string Configuration::run_label()
{
    return "single1a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.0;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef single2 // 0.019|0.009
std::string Configuration::run_label()
{
    return "single2a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.06;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.0;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef single3 // 0.019|0.009
std::string Configuration::run_label()
{
    return "single3a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.06;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.12;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.0;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef single4 // 0.019|0.009
std::string Configuration::run_label()
{
    return "single4";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.12;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.0;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef single5 // 0.019|0.009

std::string Configuration::run_label()
{
    return "single5";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.12;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.12;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.0;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef single6 // 0.019|0.009
std::string Configuration::run_label()
{
    return "single6a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0.4;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.0;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace0 // 0.019|0.009

std::string Configuration::run_label()
{
    return "replace0a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.035;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 10;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.04;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.07;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace1 // 0.019|0.009
std::string Configuration::run_label()
{
    return "replace1a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 10;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.045;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace2 // 0.0175|0.0175
std::string Configuration::run_label()
{
    return "replace2a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.045;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace3 // 0.00294 | 0.0045
std::string Configuration::run_label()
{
    return "replace3a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0.4;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.045;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace4 // 0.00294 | 0.0045
std::string Configuration::run_label()
{
    return "replace4a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0.47;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.045;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace5 // 0.00107
std::string Configuration::run_label()
{
    return "replace5a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0.4;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.045;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace6 // 0.00107
std::string Configuration::run_label()
{
    return "replace6a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0.47;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.045;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
#ifdef replace7 // 0.00107
std::string Configuration::run_label()
{
    return "replace7a";
}
std::string Configuration::output_directory()
{
    return "./../HospitalSimulation/data";
}
int Configuration::last_day()
{
    return 600;
}
int Configuration::exposed_state_duration()
{
    return 3;
}
long double Configuration::exchange_rate()
{
    return 0.025;
}
long double Configuration::immune_on_arrival()
{
    return 0.49;
}
int Configuration::number_of_contact_events_per_day()
{
    return 20;
}
int Configuration::active_state_duration_1()
{
    return 4;
}
long double Configuration::transmission_probability_1()
{
    return 0.03;
}
int Configuration::active_state_duration_2()
{
    return 4;
}
long double Configuration::transmission_probability_2()
{
    return 0.045;
}
int Configuration::time_of_strain2_appearance()
{
    return 300;
}
#endif
