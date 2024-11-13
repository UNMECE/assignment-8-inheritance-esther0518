#include <iostream>
#include "magneticField.h"

#define PI 3.1415965358979323 //pi

//default constructor, inizalize the array members using base class
Magnetic_Field::Magnetic_Field() : Field() {}

//set array members values the variables using base class
Magnetic_Field::Magnetic_Field(double x, double y, double z) : Field(x, y, z) {}

//destructor
Magnetic_Field::~Magnetic_Field(){}

//find the magnetic feild using given info
void Magnetic_Field::calulate_M(double I, double r){
    const double mu_0 = 4 * PI * 1e-7;
    calculated_M = I/ (2 * PI * r) * mu_0;
}

//get the calculated feild

double Magnetic_Field::get_calculated_M() const{
    return calculated_M;
}


