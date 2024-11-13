#include <iostream>
#include "electricField.h"
#include "magneticField.h"

using namespace std;

int main(){
    //assign the given components to the electric and magnetic field
    Electric_Field E_components (0, 1e5, 1e3);
    Magnetic_Field M_components (1e5, 10.9, 1.7e2);

    //display the magnitude of the elctric field
    cout << "Electric Feild:" << endl;
    E_components.print_magnitude();
    cout << "Magnitude- " << E_components.calculate_magnitude() << endl;
    
    //find the spefic electric field using specfic random values
    
    //charge
    double Q = 1e-6;
    //distance
    double r = 0.01;
    E_components.calculate_E(Q, r);
    cout << "Calculated Electric Feild with specific values- " << E_components.get_calculated_E() << endl;

    cout << endl;

    //display the magnitude of the magnetic feild
    cout << "Magnetic Feild:" << endl;
    M_components.print_magnitude();
    cout << "Magnitude- " << M_components.calculate_magnitude() << endl;
    
    //find the spefic magnetic field using specfic random values
    
    //current
    double I = 5.0;
    M_components.calulate_M(I, r);
    cout << "Calculated Magnetic Field with specfic values- " << M_components.get_calculated_M() << endl;
    
    return 0;
}
