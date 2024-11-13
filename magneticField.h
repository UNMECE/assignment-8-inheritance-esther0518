#ifndef MAGNETICFIELD_H
#define MAGNETICFIELD_H

#include <cmath>
#include "Field.h"

class Magnetic_Field : public Field{
    private:
    double calculated_M;

    public:

    //functions to be implemented
    Magnetic_Field();
    Magnetic_Field(double x, double y, double z);
    ~Magnetic_Field();

    //find the magnetic feild from distance r
    void calulate_M(double I, double r);

    //getter
    double get_calculated_M() const;
};



#endif