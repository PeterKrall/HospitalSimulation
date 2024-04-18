#include <QCoreApplication>
#include <QThread>
#include "configuration.h"
#include "hospital.h"
#include <ctime>
#include <fstream>
#include <functional>
#include <memory>
#include <qdir.h>

static std::function<void(int, char **)> main_thread = [](int argc, char **argv) {
    std::ofstream out;
    // open output files and write header data - prepare
    time_t t;
    std::time(&t);
    char out_filename[1024];
    char meta_filename[1024];
    std::tm *now = std::localtime(&t);
    // open matlab readable output file
    sprintf(out_filename,
            "%s/%s_%d%02d%02d_%02d%02d%02d.csv",
            Configuration::instance()->output_directory().c_str(),
            Configuration::instance()->run_label().c_str(),
            now->tm_year + 1900,
            now->tm_mon + 1,
            now->tm_mday,
            now->tm_hour,
            now->tm_min,
            now->tm_sec);
    sprintf(meta_filename,
            "%s/%s_%d%02d%02d_%02d0%2d%02d_meta.txt",
            Configuration::instance()->output_directory().c_str(),
            Configuration::instance()->run_label().c_str(),
            now->tm_year + 1900,
            now->tm_mon + 1,
            now->tm_mday,
            now->tm_hour,
            now->tm_min,
            now->tm_sec);
    out.open(meta_filename);
    out << "configuration: " << out_filename << "\n";
    out << "last_day: " << Configuration::instance()->last_day() << "\n";
    out << "exposed_state_duration: " << Configuration::instance()->exposed_state_duration()
        << "\n";
    out << "exchange_rate: " << Configuration::instance()->exchange_rate() << "\n";
    out << "immune_on_arrival: " << Configuration::instance()->immune_on_arrival() << "\n";
    out << "number_of_contact_events_per_day: "
        << Configuration::instance()->number_of_contact_events_per_day() << "\n";
    out << "active_state_duration_1: " << Configuration::instance()->active_state_duration_1()
        << "\n";
    out << "transmission_probability_1: " << Configuration::instance()->transmission_probability_1()
        << "\n";
    out << "active_state_duration_2: " << Configuration::instance()->active_state_duration_2()
        << "\n";
    out << "transmission_probability_2: " << Configuration::instance()->transmission_probability_2()
        << "\n";
    out << "time_of_strain2_appearance: " << Configuration::instance()->time_of_strain2_appearance()
        << "\n";
    out << "\n"
        << "result: " << out_filename << "\n";
    out.close();
    out.open(out_filename);

    Hospital hospital(out);
    hospital.go();
    out.flush();
    out.close();
    //Write the main() code here
    QCoreApplication::exit(0);
};

// The program main creates a thread and launches Qt core
// and will wait until someone calls QCoreApplication::exit()
int main(int argc, char *argv[])
{
    int rv;
    QCoreApplication a(argc, argv);
    std::shared_ptr<QThread> main_qthread(QThread::create(main_thread, argc, argv));
    main_qthread->start();
    rv = a.exec();
    main_qthread->wait();
    return rv;
}
