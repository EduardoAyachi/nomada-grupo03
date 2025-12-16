// 1. Si dos números son positivos, calcule su producto; si no lo son,
// calcule su suma.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    double num1, num2;
    
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (num1 > 0 && num2 > 0){
        cout << "Ambos son positivos y el producto es: " << num1 * num2 << endl;
    } else {
        cout << "Uno de los dos números es negativo y la suma es: " << num1 + num2 << endl;
    }

    return 0;
}