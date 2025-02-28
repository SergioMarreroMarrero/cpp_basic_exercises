#include <iostream>
#include <cstdlib>
using namespace std; 

int hola_mundo(){
    cout << "Hola mundo" << endl;
    return EXIT_SUCCESS;
}


int ch2_1(){
    cout << "Hola mundo!\n" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
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
    return EXIT_SUCCESS;
}


int ch2_3(){
    cout << " ****** " << endl;
    cout << "**    **" << endl;
    cout << "*      *" << endl;
    cout << "**    **" << endl;
    cout << " ****** " << endl;
    return EXIT_SUCCESS;
}

int ch2_4(){
    cout << "Bienvenidos a C++!" << endl;
    cout << "Pronto comenzaremos!" << endl;
    return EXIT_SUCCESS;
}


int ch2_7(){
    char pax[] = "Sergio sin miedo";
    cout << pax << "--------->    " <<&pax[7] << endl;
    cout << "no hay " << &pax[11] << endl;
    return EXIT_SUCCESS;
}

int ch2_8(){
    int a;
    float b, c;

    cout << "Introducir numero entero:" << endl;
    cin >> a;
    cout << "Introducir un numero real:" << endl;
    cin >> b;
    cout << "Introducir otro numero real:" << endl;
    cin >> c;

    cout << "los numeros introducidods son:" << endl;

    cout << "El numero entero es: " << a << endl;
    cout << "El numero real es: " << b << endl;
    cout << "El numero real es: " << c << endl;
    return EXIT_SUCCESS;
}

/**/