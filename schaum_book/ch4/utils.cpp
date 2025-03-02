#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std; 


int basic_if_else(float x){

    double y;
    if (x > 25.0){
        y = x;
        printf("y= %.2f\n", y);
    }
    else if (x<=25.0){
        y = pow(x,2);
        printf("y= %.2f\n", y);
    }
    return EXIT_SUCCESS;
}

int mis_notas(){
    char nota;
    cout << "Introduzca su nota: \n" << endl;
    cin >> nota;
    switch (nota){
        case 'E': cout << "sobresaliente"<< endl;
            break;
        case 'N': cout << "Notable" << endl;
            break;
        default:
            cout << "No es posible esta nota" << endl;
    }

    int n1, n2, mayor;
    n1 = 3;
    n2 = 5;
    mayor = n1 > n2 ? n1:n2;
    printf("El numero mayot es: %d\n", mayor);
    return EXIT_SUCCESS;
}

