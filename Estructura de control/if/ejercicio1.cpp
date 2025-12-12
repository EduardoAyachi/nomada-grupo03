// 1. Escribe un programa que solicite la edad de una persona y
// determine si es mayor de edad (18 años o más) o no.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int edad;
    cout << "Ingrese la edad de la persona: ";
    cin >> edad;
    if (edad <= 17){
        cout << "La persona es menor de edad" << endl;
    } else{
        cout << "La persona es mayor de edad" << endl;
    }

    return 0;
}