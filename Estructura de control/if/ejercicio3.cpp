// 3. Escribe un algoritmo que lea dos números y determina cómo
// es respecto al otro (menor, igual o mayor).

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int num1 = 0, num2 = 0;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (num1 > num2){
        cout << "El Primer número es mayor" << endl;
    } else if (num1 == num2){
        cout << "Los dos números son iguales" << endl;
    }else {
        cout << " El Segundo número es mayor" << endl;
    }

    return 0;
}




