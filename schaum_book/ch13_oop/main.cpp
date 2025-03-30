#include <cstdlib>
#include <iostream>
#include <string.h>
#include <cctype>
#include <windows.h>


using namespace std;


class Point
{
    public:
        // === CONSTRUCTORES ===
        // Constructoir por defecto (se define fuera)
        Point();

        // Constructor con 3 coordenadas (se define fuera)
        Point(float x, float y, float z);

        // Constructor de copia (se define fuera)
        Point(const Point& other);

        /* 
        Constructor que solo inicializa x (inline aqui mismo)
        Inicializa x con el valor pasado como argumento y inicializa y y z a 0.0
        Se usa la lista de inicialización para inicializar los atributos
        Point(float x): 
        x_(x), y_(0.0), z_(0.0) // lista de inicialización
        {cout << "Constructor x" << endl;} // cuerpo de constructor
        */
        Point(float x): x_(x), y_(0.0), z_(0.0) {cout << "Constructor x" << endl;}
        
        // === METODOS GET ===
        float getX() const {return x_;}
        float getY() const {return y_;}
        float getZ() const {return z_;}
        
        // === METODOS SET ===
        void setX(float x) {x_ = x;}
        void setY(float y) {y_ = y;}    
        void setZ(float z) {z_ = z;}

        // Imprime punto en consola
        void printPoint();

        // Asigna nuevas coordenadas
        void assign(float x, float y, float z);

    private:
        float x_, y_, z_;

};

// ======================== IMPLEMENTACION FUERA DE LA CLASE ========================
// Constructor por defecto -> crea el punto (0,0,0)
Point::Point()
{
    x_ = 0.0;
    y_ = 0.0;
    z_ = 0.0;
    cout << "Constructor por defecto" << endl;
}
// Constructor con 3 coordenadas
Point::Point(float x, float y, float z)
{
    x_ = x;
    y_ = y;
    z_ = z;
    cout << "Constructor con 3 coordenadas" << endl;
}

// Constructor de copia
Point::Point(const Point& other)
{
    x_ = other.x_;
    y_ = other.y_;
    z_ = other.z_;
    cout << "Constructor de copia" << endl;
}

// Imprime el punto por pantalla
void Point::printPoint(){
    cout << "Punto: (" << getX() << ", " << getY() << ", " << getZ() << ")" << endl;
}

// Asigna nuevas coordenadas al punto
void Point::assign(float x, float y, float z){
    setX(x);
    setY(y);
    setZ(z);
}


int main(int argc, char* argv[]){
    Point p, p1; // Constructor por defecto -> (0,0,0)
    Point p2(1.0, 2.0, 3.0); // Constructor con 3 coordenadas -> (1,2,3)
    Point p3(p2); // Constructor de copia -> (1,2,3)

    p.assign(4.0, 5.0, 6.0); // Asignar nuevas coordenadas al punto p

    // Imprimimos cada punto por consola
    p.printPoint(); // (4,5,6)
    p1.printPoint(); // (0,0,0)
    p2.printPoint(); // (1,2,3)
    p3.printPoint(); // (1,2,3)

    system("PAUSE");
    return EXIT_SUCCESS;
}


