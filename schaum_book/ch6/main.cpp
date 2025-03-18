#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

void paso_por_valor(int x);
void paso_por_referencia(int& x);
void paso_por_referencia_2(int* x);
void intercambio(int* x, int* y);
void error_en_compilacion_por_alterar_una_constante(const int x, const float & y);
void ejemplo_puntero();

int main(){
    int x = 5;
    int& ref = x; // al escribir int& indico que ref es una referencia a otra variable
    paso_por_referencia_2(&x);
    cout << "pero al final de todo, el valor de x es: " << x << endl;
    int y = 10;
    intercambio(&x, &y);
    cout << "mira lo que vale x: " << x << "\nmira lo que vale y: " << y << endl;
    cout << "\"x\" y \"ref\" deberian valer lo mismo" << "X: " << x << " ref vale: " << ref << endl;
    //error_en_compilacion_por_alterar_una_constante(x, y);
    cout << "veamos las memorias: " << "memoria de x: " << &x << " memoria de ref: " << &ref << endl;
    ejemplo_puntero();
    system("PAUSE");
    return 0;
}

/**/
void ejemplo_puntero(){
    double x = 3.14;
    double* mem = &x; //mem es un puntero a la posicion de memoria que almacena la variable x
    cout << "Valor de x:" << x << endl;
    cout << "Direccion de x:" << &x << endl;
    cout << "Direccion almacenada en mem:" << mem << endl;
    cout << "Valor accedido desde mem:" << *mem << endl; // desreferenciamos el puntero
    
}

void paso_por_valor(int x){
    
    cout << "El valor de x es:" << x << endl;
    x++;
    cout << "El nuevo valor de x es:" << x << endl;
}


void paso_por_referencia(int& x){
    
    cout << "El valor de x es:" << x << endl;
    x++;
    cout << "El nuevo valor de x es:" << x << endl;
}


void paso_por_referencia_2(int* x){
    
    cout << "El valor de x es:" << *x << endl;
    (*x)++; // de esta manera desreferenciamos primero (*x) y luego sumamos ++. De la otra forma aumentaria la pposicion del puntero primero
    cout << "El nuevo valor de x es:" << *x << endl;
}

void intercambio(int* x, int* y){
    // Objetivo: que x devuelva y, y vicecersa
    int aux;
    aux = *x; // como x es un puntero lo desreferencio
    *x = *y;
    *y = aux;
}



/*
void error_en_compilacion_por_alterar_una_constante(const int x, const float & y){
    // nos fijamos que y la estoy pasando por referencia
    x = 123;
    y = 421.5;
}
*/