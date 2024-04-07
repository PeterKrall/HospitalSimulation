#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <fstream>
#include <vector>

class Hospital
{
public:
    Hospital(std::ofstream &out);
    double go();
private:
    std::ofstream* out;
    std::vector<long double> expositions_strain_1;
    std::vector<long double> expositions_strain_2;
    long double immune = 0;
    double day();
    void night();
    double max_expositions = 0;
    double max_expositions_1 = 0;
    double max_expositions_2 = 0;
};

#endif // HOSPITAL_H
