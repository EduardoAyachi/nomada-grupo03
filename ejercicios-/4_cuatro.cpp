// Declara una constante bool llamada ES_ADMIN y asígnale true.
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    const bool ES_ADMIN = true;
    cout << "El ADMIN es: " << ES_ADMIN << endl;

    return 0;
}