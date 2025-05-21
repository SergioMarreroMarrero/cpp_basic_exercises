// Mi primer programa en C++
#include <iostream>
#include <string>

int main(){
    std::string nombre;
    /* Tipos primitivos int double char bool*/
    std::cout << "!Hola cómo te llamas?!" << std::endl;
    std::cin >> nombre;
    std::cout << "Bienvenido: " << nombre << std::endl;
    
    return 0;
}
