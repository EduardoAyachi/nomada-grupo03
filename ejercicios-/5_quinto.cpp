// Usa #define para declarar una constante SALUDO con el valor "Hola Mundo".
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    #define SALUDO "Hola mundo"
    cout << "El saludo es: " << SALUDO << endl;

    return 0;
}