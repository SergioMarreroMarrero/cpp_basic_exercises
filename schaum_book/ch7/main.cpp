#include <cstdlib>
#include <iostream>
#include <string.h>

// Hubo que definirlas aqui porque el compilador requiere que se conozcan en tiempo de compliacion cuando sirven para definir uin array multidimensional
#define FILAS 2
#define COLUMNAS 3

using namespace std;

int main(){
    int a[4];
    int result[4];

    a[0] = 2; a[1] = 3; a[2] = 5; a[3] = 6;

    for (int i = 0; i<=3; i++){
        result[i] = a[i]*5;
    }

    for (int i = 0; i<=3; i++){
        cout << result[i] << endl;
    }

    // ejemplo de iniciacializacion
    int num[5] = {10, 20, 30, 40, 50};
    double x[] = {1.0, 2.4};

    // declaro unas constantes
    const int ENE = 31, FEB = 28, MAR = 31, ABR = 30, MAY = 31, JUN = 30,
              JUL = 31, AGO = 31, SEP = 30, OCT = 31,NOV = 30, DIC = 31;

    int meses[12] = {ENE, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC};

    // Cadena de caracteres
    char grito[] = {'A', 'u', 'a', 'a', 'h'}; // esto es un array
    char grito2[] = "auaah"; // esto es una cadena de caracteres. La diferencia es que esta por defecto añade un caraacter mas "\0" que es lo que le da la tipologia
    /*
    Esto es incorrecto.
    char grito3[];
    grito3 = "auaah";
    
    char grito4[5];
    strcpy(grito4, "auaah");
    */
    for (int i = 0;i <= 4;i++){
        cout << grito[i];
    }
    cout << endl;

    for (int i = 0;i <= 4;i++){
        cout << grito2[i];
    }
    cout << endl;
    /*
    for (int i = 0;i <= 4;i++){
        cout << grito4[i];
    }
    cout << endl;
    */

    // arrays multidimensionales
    
    int ejemplo[FILAS][COLUMNAS] = {1,2,3,4,5,6}; // 2 paquetes de 3
    int ejemplo2[FILAS][COLUMNAS] = { {1,2,3}, {4,5,6}};
    double zero[FILAS][COLUMNAS] = {0.0};
    for (int i=0;i<FILAS;i++){
        for(int j=0;j<COLUMNAS;j++){
            cout << ejemplo[i][j];
        }
        cout << endl;
    }
    system("PAUSE");
    return 0;
}




