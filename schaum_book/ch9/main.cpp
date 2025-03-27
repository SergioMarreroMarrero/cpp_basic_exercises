#include <cstdlib>
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

// === Ejemplo 2 === //
struct registro {
    char nombre_y_apellidos[51];
    char Calle[33], Poblacion[28];
    char Provincia[28], Pais[21], Codigo_Postal[8];
} r;

void leer_registro(registro &r);
void escribir_registro(registro r);


// === Ejemplo 3 === //
bool esvocal(char ch);

int main(){
    /*
    //===== ejemplo 1
    char Ejemplo[31];
    cout << " introduzca frase \n ";
    cin.getline(Ejemplo, 30); // lectura de cadena completa
    cout << "\t\"" << Ejemplo << "\"\n";
    cout << " introduzca otra frase \n ";
    cin >> Ejemplo; // Lectura de la palabra hasta encontrar blanco
    //====

    // ejemplo 2
    leer_registro(r);
    escribir_registro(r);
    */
    // ejemplo 3
    char ch;
    int cuenta = 0;

    cout << "Lectura de vocales. Escribe una vocal:" << endl;
    while (cin.get(ch)){
        if (ch == '.') break;
        if (esvocal(ch)){
            cuenta++;
            cout.put(tolower(ch));
        }else if(isalpha(ch)){
            cout.put(toupper(ch));
        }
        else cout.put(ch);
            
    }
    cout << " numero de vocales leidas " << cuenta << "\n";
    


    
    return 0;
}


// === Ejemplo 2 === //
void leer_registro(registro &r){

    cout << " Lectura de datos \n";
    cout << " Nombre y apellidos: "; cin.getline(r.nombre_y_apellidos, 50);
    cout << " Calle: "; cin.getline(r.Calle, 32);
    cout << "Poblacion: "; cin.getline(r.Poblacion, 27);
    cout << "Provincia: "; cin.getline(r.Provincia, 27);
    cout << "Pais: "; cin.getline(r.Pais, 20);
    cout << "Codigo Postal: "; cin.getline(r.Codigo_Postal, 7);
    
}

void escribir_registro(registro r){
    cout << "\n Visualizacion de datos \n \n";
    cout << "   " << r.nombre_y_apellidos << endl;
    cout << "   " << r.Calle << endl;
    cout << "   " << r.Poblacion << endl;
    cout << "   " << r.Provincia << endl;
    cout << "   " << r.Pais << endl;
    cout << "   " << r.Codigo_Postal << endl;
}


// === Ejemplo 3 === //
bool esvocal(char ch){
    ch = toupper(ch);
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}


