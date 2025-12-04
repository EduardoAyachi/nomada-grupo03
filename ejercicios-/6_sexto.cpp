// Crea un programa que calcule el área de un círculo usando una constante PI.
// formulilla a = pi * r² --> pi = 3.14159 
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    const float PI = 3.14159f;
    float radio;
    double area;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    area = PI * (radio * radio);
    cout << "El área de un determinado círculo es: " << area << endl;

    return 0;
}