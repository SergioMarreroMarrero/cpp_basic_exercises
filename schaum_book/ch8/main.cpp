#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;


void estructuras();
void uniones();
void enumeracion();
void generacion_de_alias();

int main(){
    
    estructuras();
    uniones();
    enumeracion();
    system("PAUSE");
    return 0;
}


void enumeracion(){
/*
Una enumeración (tipo enum) es una forma de crear tus propias constantes con nombre para representar valores enteros.
Sirve para que tu código sea más legible, fácil de mantener, y evitar errores con números mágicos (como poner 1, 2, 3 por ahí sin sentido).
*/
enum interruptor {ON, OFF};
enum tipo_operacion{ADD, DELETE, ALTER, VIEW};

tipo_operacion op;
op = ADD;
switch (op)
{
    case ADD:
        /* code */
        cout << "Add operation" << endl;
        break;

    case DELETE:
        /* code */
        cout << "Delete operation" << endl;
        break;

    case ALTER:
        /* code */
        cout << "Ater operation" << endl;
        break;

    case VIEW:
        /* code */
        cout << "View operation" << endl;
        break;


    default:
        cout << "No operation" << endl;
        break;
}

}



void generacion_de_alias(){
    // De esta forma podemos usar el alias "minutos" en lugar de enteros. 
    typedef int minutos;
    typedef unsigned int uint;
    minutos minutos_desde_inicio;
    minutos_desde_inicio = 45;

    cout << "Tiempo de reiniocion: " << minutos_desde_inicio << endl;

}

void uniones(){
    // Las uniones son exactamente igual que las estructuras pero sirven para gestionar la memoria más eficienteiemte.
    // Basicamente solo pueden guardar información de un tipo a la vez.

    union Dato {
        int i;
        float f;
        char c;
    };

    Dato d;
    d.i = 4;
    cout << "Ahora tengo un entero: " << d.i << endl;

    d.f = 4.5;
    cout << "Ahora tengo un float: " << d.f << endl;
    
    d.c = 'a';

    cout << " Ahora tengo un char: " << d.c << endl;
    cout << "Y entonces aqui que tengo?: " << d.i << endl;

}


void estructuras(){
    
    // Definicion de estructuras
    struct complejo {
        double real;
        double imaginaria;
    } c1 = {0.12, 2.3};

    struct Persona {
        char nombre[50];
        int edad;
        float altura;
        float peso;
    };

    Persona Paco;
    // 1. Diferencia entre instanciarla como structruca o como puntero
    // Como estructura
    strcpy(Paco.nombre, "Paco");
    Paco.edad = 32;
    Paco.altura = 175;
    Paco.peso = 76;

    cout << "pare real: " << c1.real << "parte imaginaria: " << c1.imaginaria << endl;

    cout << "Sobre Paco: " << "Nombre: "<< Paco.nombre << endl;
    cout << "Edad: "<< Paco.edad << endl;
    cout << "Altura: "<< Paco.altura << endl;
    cout << "Peso: "<< Paco.peso << endl;

    // Como puntero

    Persona *Paquito = new Persona;
    strcpy(Paquito->nombre, "Paco");
    Paquito -> edad = 32;
    Paquito -> altura = 175;
    Paquito -> peso = 76;

    cout << "Sobre Paco: " << "Nombre: "<< Paquito->nombre << endl;
    cout << "Edad: "<< Paquito->edad << endl;
    cout << "Altura: "<< Paquito->altura << endl;
    cout << "Peso: "<< Paquito->peso << endl;

    delete Paquito;


    // 2. Estrcutura anidadas. Simplemente estructuras dentro de otras estructuras.

    struct Fecha {
        int day, month, year;
    };

    struct Empleado {
        int edad;
        Fecha fecha_contratacion;
    } juan;

    juan.edad = 42;
    juan.fecha_contratacion.day = 12;
    juan.fecha_contratacion.month = 11;
    juan.fecha_contratacion.year = 1999;

    cout << "JUAN:" << endl;
    cout << "edad: " << juan.edad << endl;
    cout << "dia contratacion: " << juan.fecha_contratacion.day << endl;
    cout << "mes contratacion: " << juan.fecha_contratacion.month << endl;
    cout << "año contratacion: " << juan.fecha_contratacion.year << endl;

    // Tambien lo podríamos haber definido como puntero
    // Solo usamos la notacion -> "para salir del puntero" ya luego seguimos con la estrucutura usando "."

    Empleado *Juanito = new Empleado;

    Juanito->edad = 42;
    Juanito->fecha_contratacion.day = 12;
    Juanito->fecha_contratacion.month = 11;
    Juanito->fecha_contratacion.year = 1999;

    
    cout << "JUANITO EL PUNTERO:" << endl;
    cout << "edad: " << Juanito->edad << endl;
    cout << "dia contratacion: " << Juanito->fecha_contratacion.day << endl;
    cout << "mes contratacion: " << Juanito->fecha_contratacion.month << endl;
    cout << "año contratacion: " << Juanito->fecha_contratacion.year << endl;


    // Arrays de estructuras
    Empleado eurofirms_empleados[2]; // no es más que una lista de empleados
    eurofirms_empleados[0].edad = 32;
    eurofirms_empleados[0].fecha_contratacion.day = 12;
    eurofirms_empleados[0].fecha_contratacion.month = 11;
    eurofirms_empleados[0].fecha_contratacion.year = 1999;

    eurofirms_empleados[1].edad = 23;
    eurofirms_empleados[1].fecha_contratacion.day = 12;
    eurofirms_empleados[1].fecha_contratacion.month = 12;
    eurofirms_empleados[1].fecha_contratacion.year = 2009;

    
}