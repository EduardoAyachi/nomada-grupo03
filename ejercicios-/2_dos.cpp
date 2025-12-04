// Declara una constante float llamada PI utilizando const y asígnale el valor 3.14159.
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    const float PI = 3.14159f;
    cout << "El valor de Pi es: " << PI << endl;

    return 0;
}