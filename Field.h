#ifndef FIELD_H
#define FIELD_H

#include <cmath>

class Field{

    protected:
    double *value;

    public:
    //function to be implemented
    Field();
    Field(double x, double y, double z);
    virtual ~Field();

    //calculate the magnitude of the feild
    double calculate_magnitude() const;

    //print the components
    void print_magnitude() const;

};


#endif