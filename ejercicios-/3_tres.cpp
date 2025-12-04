// Declara una constante char llamada SEPARADOR y asígnale el carácter '-’.
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    const char SEPARADOR ='-';
    cout << "El valor asignado al SEPARADOR es: " << SEPARADOR << endl;

    return 0;
}