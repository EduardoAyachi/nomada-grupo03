#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int a = 1;
    int b = 2;

    bool condicion = true;
    
    // if (a == b || a < b){
    //     cout << "Condición es true" << endl;
    // }else {
    //     cout << "Condición es false" << endl;
    // }

    if (a == b){
        cout << "La primera condición es true" << endl;
    } else if (a < b){
        cout << "La segunda condición es true" << endl;
    } else {
        cout << "Ninguna de las condiciones es true" << endl;
    }

    return 0;
}