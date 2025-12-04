// 2. Crea un programa que simule un menú de opciones para
// realizar operaciones aritméticas simples: suma, resta,
// multiplicación, división y potencia.

#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    char operacion;
    int num1, num2;
    float resultado = 0;

    cout << "\tMenú de opciones\n";
    cout << "Ingresa la operación aritmética\nque desea realizar (S-R-M-D-P): ";
    cin >> operacion;

    switch (operacion){
    case 'S':
    case 's':
        cout << "Ingrese dos números para realizar la operación: ";
        cin >> num1 >> num2;
        resultado = num1 + num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case 'R':
    case 'r':
        cout << "Ingrese dos números para realizar la operación: ";
        cin >> num1 >> num2;
        resultado = num1 - num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case 'M':
    case 'm':
        cout << "Ingrese dos números para realizar la operación: ";
        cin >> num1 >> num2;
        resultado = num1 * num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case 'D':
    case 'd':
        cout << "Ingrese dos números para realizar la operación: ";
        cin >> num1 >> num2;
        resultado = num1 / num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case 'P':
    case 'p':
        cout << "Ingrese dos números para realizar la operación: ";
        cin >> num1 >> num2;
        resultado = pow(num1, num2);
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    
    default:
        cout << "Opereación aritmética escogida es incorrecta" << endl;
    }

    return 0;
}