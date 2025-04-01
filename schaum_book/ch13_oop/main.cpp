#include <cstdlib>
#include <iostream>
#include <string.h>
#include <cctype>
#include <windows.h>


using namespace std;
#define max 1000 // Definimos el tamaño máximo del stack

// ======================== CLASE PUNTO ========================
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

        ~Point(){} // Destructor (no hace nada, pero se puede definir si se quiere liberar memoria)

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
// ======================== FIN CLASE PUNTO ========================

// ======================== CLASE COUNTER ========================
class Counter
{
    private:
        unsigned int count; // Contador de instancias de la clase Counter
    public:
        Counter() {count = 0;} // Constructor por defecto
        void increment() {count++;} // Incrementa el contador
        int get_count() const {return count;} // Devuelve el valor del contador
        ~Counter(){} // Destructor (no hace nada, pero se puede definir si se quiere liberar memoria)
};

// ======================== FIN CLASE COUNTER ========================

// ======================== CLASE STACK ========================
class Stack
{
    private:
        int top;
        float a[max];
    public:
        Stack(){top = 0;} // Constructor por defecto -> inicializa el stack vacío
        float pop(); // Saca el elemento del stack
        void push(float x); // Añade un elemento al stack 
        ~Stack(){} // Destructor (no hace nada, pero se puede definir si se quiere liberar memoria)
};

float Stack::pop()
{
    if (top <=0)
        cout << "stack overtflow" << endl;
    else
        return a[--top]; // Decrementa el top y devuelve el elemento
}

void Stack::push(float x)
{
    if (top >=max)
        cout << "stack overtflow" << endl;
    else
        a[top++] = x; // Decrementa el top y devuelve el elemento
}
// ======================== FIN CLASE STACK ========================


int main(int argc, char* argv[]){
    // ======================== CLASE PUNTO ========================
    Point p, p1; // Constructor por defecto -> (0,0,0)
    Point p2(1.0, 2.0, 3.0); // Constructor con 3 coordenadas -> (1,2,3)
    Point p3(p2); // Constructor de copia -> (1,2,3)

    p.assign(4.0, 5.0, 6.0); // Asignar nuevas coordenadas al punto p

    // Imprimimos cada punto por consola
    p.printPoint(); // (4,5,6)
    p1.printPoint(); // (0,0,0)
    p2.printPoint(); // (1,2,3)
    p3.printPoint(); // (1,2,3)
    
    // ======================== FIN CLASE PUNTO ========================
    // ======================== CLASE COUNTER ========================
    Counter c;
    for (int i = 0; i < 10; i++){
        cout << " c = " << c.get_count() << endl;
        c.increment(); // Incrementa el contador
        if (c.get_count() == 2){
            c = Counter(); // Reinicia el contador a 0
        }
    }
    // ======================== FIN CLASE COUNTER ========================
    // ======================== CLASE STACK ========================
    Stack s;
    s.push(1.0); // Añade 1.0 al stack
    s.push(2.0); // Añade 2.0 al stack  
    cout << "s.pop() = " << s.pop() << endl; // Saca el elemento del stack (2.0)
    cout << "s.pop() = " << s.pop() << endl; // Saca el elemento del stack (1.0)
    // ======================== FIN CLASE STACK ========================

    system("PAUSE");
    return EXIT_SUCCESS;
}


