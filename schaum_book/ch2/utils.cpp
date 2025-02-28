#include <iostream>
#include <cstdlib>
using namespace std; 

void hola_mundo(){
    cout << "Hola mundo" << endl;
}


void ch2_1(){
    cout << "Hola mundo!\n" << endl;
    system("PAUSE");
}


int ch2_2(){
    const char* prueba = "esto es una prueba";
    char cadena[21]="sale la cadena.";
    std::string cadena_dinamica = "sale la cadena // sale la cadena."; 
    cout << prueba << endl;
    cout << "Escribimos de nuevo.\n";
    cout << cadena << endl;
    cout << &cadena[8] << endl;
    cout << cadena_dinamica << endl;

    system("PAUSE");

    return EXIT_SUCCESS;
}

/**/