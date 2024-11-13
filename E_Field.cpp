#include <iostream>
#include "electricField.h"

#define PI 3.1415965358979323 //pi

//default constructor to allocate memory and initialize the array members to the given component values using base class
Electric_Field::Electric_Field() : Field() {}


//set the array members with their respective variables using base class
Electric_Field::Electric_Field(double x, double y, double z) : Field(x, y, z){}

//destructor
Electric_Field::~Electric_Field() {}

//find the elctric feild using given information
void Electric_Field::calculate_E(double Q, double r){
    const double epsilon_0 = 8.854e-12;
    calculated_E = Q / (4 * PI * epsilon_0 * r * r);
}

//get the calculated elctric field
double Electric_Field::get_calculated_E() const{
    return calculated_E;
}


