// Declara una constante int llamada MAX_NOTAS con el valor 100.
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    const int MAX_NOTAS = 100;
    cout << "La nota maxima es: " << MAX_NOTAS << endl;

    return 0;
}