#include <cstdlib>
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;


int main(){
    // Ejercicio 1
    int valor_e = 100;
    int *ptr = &valor_e; // puntero a la direccion de memoria de la variable valor_e
    int **ptr2ptr = &ptr; // puntero a la direccion de memoria del puntero ptr

    // Ejercicio 2
    int var; // variable entera
    int *pun; // puntero a entero

    pun = &var;
    *pun = 60;
    cout << "===Ejercicio 2===" << endl;
    cout << " &var Direccion de var = " << &var << endl;
    cout << " Contenido de pun es la misma direccion de var ";
    cout << pun << endl;
    cout << " Contenido de var: " << var << endl;
    cout << " El contenido de *pun es el mismo que el de var: " << endl;
    cout << *pun << endl;
    cout << "===Fin Ejercicio 2===" << endl;

    // Ejercicio 3
    // Escribir los numeros ASCII de los caracteres A, B, C, D, E, F
    char *punteroc;
    char caracter;
    cout << "===Ejercicio 3===" << endl;
    punteroc = &caracter;
    cout << " ASCII caracter " << endl;
    for (caracter = 'A'; caracter <= 'F'; caracter++)
    cout << " " << (int) caracter << "    " << *punteroc << " = " << caracter << endl;
    cout << "===Fin Ejercicio 3===" << endl;

    // Ejercicio 4
    // Punteros NULL y void
    int x, *px = &x, &rx = x;
    char* c = "Cadena larga";
    float *z = NULL;
    void *r = px, *s = c, *t = z;

    /*
    x es una variable entera
    px es un puntero a la direccion de x
    rx es un entero referenciado a x
    c es un puntero a caracter, cadena de caracteres de longitud 10
    z es un puntero float inicializado a null
    r es un puntero a void inicializado a un puntero a entero
    s es un puntero a void inicializado a char
    t es un puntero a void inicializado a puntero inicializado a un puntero a float inicialido a NULL
    */

    // Ejercicio propuesto por chat GPT
    /*  Puntero a NULL
        Declara un puntero a entero, comprueba si es NULL y muestra un mensaje si no apunta a nada.
        1. Declara un puntero a int 
        2. asignamos nullptr (es el null de c++ moderno) 
        3. Usamos if para ver si esta vacio 
        4. Print el puntero esta vacio*/
    cout << "Ejercicio puntero a null: " << endl;
    int *p = nullptr; // Tambien podríamos haber puesto NULL
    if (p == nullptr) // Literalmente p guarda la memoria "nullptr", es decir...en lugar de guardar 0x42345, guarda "null", por eso es como un puntero a NULL
        cout << "El puntero esta vacio" << endl;
        
    /*  Puntero a void
        Usa un void* para apuntar a una variable float y luego imprime su valor
        1. Declara una variable float con un valor (por ejemplo: 3.14f).
        2. Declara un puntero void* y haz que apunte a la variable float.
        3. Haz el cast apropiado para imprimir el valor
    */
    cout << "Ejercicio puntero a void: " << endl;
    float f = 4.0;
    void *pav;
    pav = &f;
    cout << *(float*)pav << endl;

    //Puntero a arrays
    /*
    Este programa inicializa un array de reales y visualiza las direcciones de cada una de las posiciones asi como sus contenidos
            Direccion       Contenido
    V+0 = 000000B1EC51F6F8 V[0] = 11
    V+1 = 000000B1EC51F6FC V[1] = 21
    V+2 = 000000B1EC51F700 V[2] = 31
    V+3 = 000000B1EC51F704 V[3] = 41
    V+4 = 000000B1EC51F708 V[4] = 51
    V+5 = 000000B1EC51F70C V[5] = 61
    */
    float V[6];
    for (int j = 0; j < 6; j++)
        *(V+j) =  (j + 1) * 10 + 1;
    cout << " Direccion     Contenido" << endl;
    for (int j = 0; j < 6; j++){
            cout << " V+" << j << " = " << V + j;
            cout << " V[" << j << "] = " << *(V + j) << endl; 
    }


    /*
    El siguiente programa inicializa el array de reales R y el arrade punteros a reales PR, 
    con las direcciones de las sucesivas posiciones del array R. Posteriormente, visualiza las direcciones
    y los contenidos de R usando el areray de punteros PR

        R
    Direccion     Contenido
    R+0 = 00000054A7AFF858 R[0] = 51
    R+1 = 00000054A7AFF85C R[1] = 41
    R+2 = 00000054A7AFF860 R[2] = 31
    R+3 = 00000054A7AFF864 R[3] = 21
    R+4 = 00000054A7AFF868 R[4] = 11
    R+5 = 00000054A7AFF86C R[5] = 1
    PR
    Direccion     Contenido
    PR+0 = 00000054A7AFF888 *PR[0] = 51
    PR+1 = 00000054A7AFF890 *PR[1] = 41
    PR+2 = 00000054A7AFF898 *PR[2] = 31
    PR+3 = 00000054A7AFF8A0 *PR[3] = 21
    PR+4 = 00000054A7AFF8A8 *PR[4] = 11
    PR+5 = 00000054A7AFF8B0 *PR[5] = 1
    */

    float R[6], *PR[6];

    for (int i = 0; i < 6; i++)
    {
        *(R+i) = (5-i)*10+1; // Esto es lo mismo que R[i] = (5-i)*10+1;
        *(PR+i) = R + i; // Esto es lo mismop que PR[i] = &R[i]

    }

    cout << " R" << endl;
    cout << " Direccion     Contenido" << endl;
    for (int j = 0; j < 6; j++){
            cout << " R+" << j << " = " << R + j;
            cout << " R[" << j << "] = " << *(R + j) << endl;  
    }

    cout << " PR" << endl;
    cout << " Direccion     Contenido" << endl;
    for (int j = 0; j < 6; j++){
            cout << " PR+" << j << " = " << PR + j;
            cout << " *PR[" << j << "] = " << **(PR + j) << endl; 
            
    }

    //Puntero a cadenas
    /**/
    char alfabeto[27] = "abcdefgsgds";
    char *punt, *punt2; 
    punt = alfabeto; punt2 = &alfabeto[0]; // fijatre, es lo mismo

    // Podemos considerar dos tipos de definiciones de cadena
    char cadena[] = "las estaciones";
    char* pCadena = "del anyo son";
    /*
    Esto es loquisimo
    1. estaciones[4] es un array de cuatro cajas.
    2. Cada caja contiene un puntero a char
    3. De tal forma que:
    estaciones[0] -> "Spring"; Es decir, la primera posicione de estaciones es un puntero a "Spring"
    etc
    */
    char* estaciones[4] = {"Spring", "Summer", "Winter", "Autumn"};

    /*
    Aritmetica de punteros
    A un puntero se le puede sumar n posiciones
    
    */

    char* mypuntero;
    char mycadena[81];

    cout << "Introduzca cadena a convertir:\n\n";
    cin.getline(mycadena, 80);
    mypuntero = mycadena; // mypunter = &mycadena[0]

    while (*mypuntero){ // mientras mypuntero no apunte a \0
        if ((*mypuntero >= 'A') && (*mypuntero <= 'Z'))
        {
            *mypuntero++ = *mypuntero + 32; //
        }
        else if ((*mypuntero >= 'a') && (*mypuntero <= 'z'))
        {
            *mypuntero++ = *mypuntero - 32; 
        }else
        {
            mypuntero++;
        }
    
    /*
    Puntero a constante vs Puntero constante
    Puntero constante:
        Esto es un puntero con una direccion constante, por ejemplo 0x9789.
        El valor que contiene esta posicion de memoria puede cambiar. Lo que no puede cambiar es que el puntero apunte a esta direccion
    Ejemplo:
    char *const puntero;

    Puntero a una constante:
        El valor del puntero puede cambiar, pero el contenido al que apunte debe ser constante
    const char* puntero;
    */


    /*Asuntos pendientes
    Punteros array de dos dimensiones
    Punteros como argumentos de dos dimensiones
    Punteros a funciones
    Punteros a estructuras


    */
        

    }





    return 0;
}

