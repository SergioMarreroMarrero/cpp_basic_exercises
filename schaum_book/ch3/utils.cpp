#include <iostream>
#include <cstdlib>
using namespace std; 

const double G = 6.67*pow(10,-8);

int aritmetic_expression(float x, float y){

    float a = 15/12;
    cout << "15/12= " << a << endl;
    
    a = 15.0/12;
    printf("15.0/12= %.3f\n", a);
    
    int moda = 15%12;
    printf("15%%12= %d\n", moda);

    int aritmetica;
    aritmetica = 13 - (24 + 2*5)/4 % 3;
    printf("aritmerica: %d\n", aritmetica);


    cout << x/y + 1 << endl;
    cout << pow(x+y, 2) << endl;
    
    return EXIT_SUCCESS;
}

int grav_force(double m1, double m2, double d){
    double force; 
    force = G*m1*m2/pow(d,2);
    printf("Gravitational Force: %.10f\n\n", force);
    return EXIT_SUCCESS;
}