#include "../configuration.h"
#include <string>
Configuration* Configuration::Configuration::the_instance = nullptr;
Configuration* Configuration::instance()
{
    if (the_instance == nullptr) { the_instance = new Configuration(); }
    return the_instance;
}

Configuration::Configuration() { /* do nothing here */ }
std::string Configuration::run_label() { return "single1b"; }
std::string Configuration::output_directory () { return"./../HospitalSimulation/data"; }
int Configuration::last_day () { return 600; }
int Configuration::exposed_state_duration () { return 3; }
long double Configuration::exchange_rate () { return 0.025; }
long double Configuration::immune_on_arrival () { return 0 ; }
int Configuration::number_of_contact_events_per_day () { return 20; }
int Configuration::active_state_duration_1 () { return 4; }
long double Configuration::transmission_probability_1 () { return 0.03; }
int Configuration::active_state_duration_2 () { return 4; }
long double Configuration::transmission_probability_2 () { return 0.0; }
int Configuration::time_of_strain2_appearance() { return 300; }
