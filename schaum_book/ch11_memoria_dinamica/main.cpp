#include <cstdlib>
#include <iostream>
#include <string.h>
#include <cctype>
#include <windows.h>


using namespace std;



int enter_length_array_defined_by_user();

int main(){
    // Cambiamos la codificación de la consola a UTF-8
    // para que acepte caracteres UTF-8 en la salida
    SetConsoleCP(CP_UTF8); // Para que acepte caracteres UTF-8 en la entrada
    system("cls"); // Limpiamos la pantalla


    enter_length_array_defined_by_user();

    return 0;
}



int enter_length_array_defined_by_user() {

    int n;
    cout << "¿Cuantos numeros quieres guardar?: ";
    cin >> n;

    int* numeros = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Introduce el numero " << i << ": ";
        cin >> numeros[i];
    }

    cout << "Los numeros introducidos son:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numeros[i];
        if (i < n - 1) cout << ", ";
    }

    delete[] numeros;
    numeros = nullptr;

    return 0;
}
