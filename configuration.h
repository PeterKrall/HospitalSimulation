#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <string.h>
#ifndef USE_CONFIGURATION_INSTANCE
#define replace7
#endif
class Configuration
{
#ifdef single1 // 0.019|0.009
public:
    inline static const std::string run_label = "single1";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.0;
#endif
#ifdef single2 // 0.019|0.009
public:
    inline static const std::string run_label = "single2";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.06;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.0;
#endif
#ifdef single3 // 0.019|0.009
public:
    inline static const std::string run_label = "single3";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.06;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.12;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.0;
#endif
#ifdef single4 // 0.019|0.009
public:
    inline static const std::string run_label = "single4";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.12;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.0;
#endif
#ifdef single5 // 0.019|0.009
public:
    inline static const std::string run_label = "single5";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.12;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.12;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.0;
#endif
#ifdef single6 // 0.019|0.009
public:
    inline static const std::string run_label = "single6";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0.4;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.0;
#endif
#ifdef replace0 // 0.019|0.009
public:
    inline static const std::string run_label = "replace0";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.035;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 10;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.04;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.07;
#endif
#ifdef replace1 // 0.019|0.009
public:
    inline static const std::string run_label = "replace1";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 10;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.045;
#endif
#ifdef replace2 // 0.0175|0.0175
public:
    inline static const std::string run_label = "replace2";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.045;
#endif
#ifdef replace3 // 0.00294 | 0.0045
public:
    inline static const std::string run_label = "replace3";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0.4;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.045;
#endif
#ifdef replace4 // 0.00294 | 0.0045
public:
    inline static const std::string run_label = "replace4";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0.47;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.045;
#endif
#ifdef replace5 // 0.00107
public:
    inline static const std::string run_label = "replace5";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0.4;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.045;
#endif
#ifdef replace6 // 0.00107
public:
    inline static const std::string run_label = "replace6";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0.47;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.045;
#endif
#ifdef replace7 // 0.00107
public:
    inline static const std::string run_label = "replace7";
    inline static const std::string output_directory = "./../HospitalSimulation/data";
    static const int last_day = 600;
    static const int exposed_state_duration = 3;
    constexpr static const long double exchange_rate = 0.025;
    constexpr static const long double immune_on_arrival = 0.49;
    static const int number_of_contact_events_per_day = 20;
    static const int active_state_duration_1 = 4;
    constexpr static const long double transmission_probability_1 = 0.03;
    static const int active_state_duration_2 = 4;
    constexpr static const long double transmission_probability_2 = 0.045;
#endif
#ifdef USE_CONFIGURATION_INSTANCE
    // this is a just stub in the basic project - it will be used for more sophisticated projects
    // for the same epidemiologica model
public:
    void initialize(); // set the static member values using GUI, DB or whatever
private:
    Configuration();
    Configuration* instance = nullptr;
    int get_time_of_strain2_appearance();
public:
    //
    static std::string run_label;
    static std::string output_directory;
    static int last_day;
    static int exposed_state_duration;
    static long double exchange_rate;
    static long double immune_on_arrival;
    static int number_of_contact_events_per_day;
    static int active_state_duration_1;
    static long double transmission_probability_1;
    static int active_state_duration_2;
    static long double transmission_probability_2;
    static int time_of_strain2_appearance();
#else
    static inline int time_of_strain2_appearance() { return last_day/2; }
#endif
};

#endif // CONFIGURATION_H
