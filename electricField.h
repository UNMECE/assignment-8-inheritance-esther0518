#ifndef ELECTRICFIELD_H
#define ELECTRICFIELD_H

#include <cmath>
#include "Field.h"

class Electric_Field : public Field{
  private:
  double calculated_E;

  public:
  //functions to be implemented

  //constructors and destructor for allocated memory
  Electric_Field();
  Electric_Field(double x, double y, double z);
  ~Electric_Field();

  //functions to calcualte the electric feild from distance r
  void calculate_E(double Q, double r);

  //getter
  double get_calculated_E() const;

};


#endif
