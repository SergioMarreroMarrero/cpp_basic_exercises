/*
Tambien podemos hacer:

Pero claro...si lo que queremos es programas rapidos...tampoco tiene mucho sentido que lo hagamos así
idealmente solo lo deberíamos usar en archivos de codigo fuente y no en archivos de cabecera



A esto se le llama: notacion de constructor Estamos llamando a una funcion especifica del tipo de datos ifstream que recibe un nombre y construye un objeto
ifstream archivo(nombre_archivo);
lo que hacemos es: 
1. tipo de dato "ifstream"
2. le pasamos el "nombre_archivo" a "archivo" que es la variable tipo "ifstream"
Entiendo que automaticamente construye el tipo "ifstream"
Es un poco confuso por ahora
Es algo así como: el constructor del tipo ifstream necesita solamente una direccion de un archivo
Algo así podriamos hacer con un entero:

int numero(5); -> el constructor de un tipo entero solo necesita el 5 para construirse

De locos este ejemplo. Los {} define un scope donde una variable existe
Esto significa que {} funciona como destructor de la variable
string cadena = "hola";
{
    int numero = 100;
    cout << numero << endl;
    cout << cadena << endl;
}
cout << numero << endl;
cout << cadena << endl;

// Buscar el patron y mostrar lineas
string linea;
getline(archivo, linea);
while(!archivo.eof()){ //eof() -> indica si ha llegado al fin de archivo
    cout << linea << endl;
    getline(archivo, linea);
}
// Notacion alternativa
// Cuando getline devuelve un archivo ok devuelve True. Si este se acaba devuelve False

¿Qué es size_t?
size_t es un tipo de dato entero sin signo (unsigned int) diseñado para almacenar tamaños o índices.
Su ventaja es que se adapta al sistema: en una máquina de 32 bits será de 32 bits, y en una de 64 bits será de 64 bits.
Lo usas cuando trabajas con posiciones, tamaños o conteos (como índices de arrays, strings, o tamaños de memoria).
*/

#include <iostream>
#include <string>
#include <fstream>

/*
using std::string;
using std::cout;
using std::cerr;
using std::endl;
using std::ifstream;
*/
using namespace std;


int main(int argc, char* argv[]){

    // Verificacion de argumentos en la linea de comandos
    if (argc != 3){
        cout << "Como minimo deben haber 2 argumentos. Se han pasado menos de 2." << endl;
        cout << "Uso correcto: " << argv[0] << "<patron> <nombre_archivo>" << endl;
        return 0;
    }

    // Recibir parametros de la linea de comandos
    bool leido_patron = false, mostrar_linea = false;
    string patron, nombre_archivo;
    for (int i = 1;i != argc; i++){
        string argumento = argv[i];
        if (argumento == "-n"){
            
        }
    }
    patron = argv[1];
    nombre_archivo = argv[2];


    // Abrir el archivo
    ifstream archivo(nombre_archivo);
    if(!archivo.is_open()){
        // Es recomendable distinguir entre cout -> usuario y cerr -> salida estandar de errores
        cerr << "No fue posible abrir el archivo: " << nombre_archivo << endl;
        return -1;
    }

    string linea;
    while(getline(archivo, linea)){
        size_t posicion = linea.find(patron); // cuando no lo encuentra en lugar de devolver -1 devuelve string::npos
        if(posicion != string::npos){ // string::npos es una constante con el entero más grande posible 2**64-1 (o ensistemas de 32 2**32-1)
            cout << linea << endl;
        }
    }
    return 0;
}