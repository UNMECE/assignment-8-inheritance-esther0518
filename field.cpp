#include <iostream>
#include "Field.h"

Field::Field(){
    value = new double[3];
    value[0] = 0.0;
    value[1] = 0.0;
    value[2] = 0.0;
}

//set array members values the variables
Field::Field(double x, double y, double z){
    value = new double[3];
    value[0] = x;
    value[1] = y;
    value[2] = z;
}

//destructor to free the memory
Field::~Field(){
    delete[] value;
}

//find the magnitude
double Field::calculate_magnitude() const{
    return sqrt(value[0]*value[0] + value[1]*value[1] + value[2]*value[2]);
}

//print function
void Field::print_magnitude() const{
    std::cout << "Components- ";
    std::cout << "(" << value[0] << ", " << value[1] << ", " << value[2] << ")" << std::endl;
}
