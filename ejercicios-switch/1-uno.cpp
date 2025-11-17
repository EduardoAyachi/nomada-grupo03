// 1. Escribe un programa que lea un número entre 1 y 7, y que
// muestre el nombre del día de la semana correspondiente.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int semana;
    cout << "Ingrese un número del 1-7 para determinar que día de la semana es: ";
    cin >> semana;

    switch (semana)
    {
    case 1: 
        cout << "El día de la semana es Lunes" << endl;
        break;
    case 2:
        cout << "El día de la semana es Martes" << endl;
        break;
    case 3:
        cout << "El día de la semana es Miércoles" << endl;
        break;    
    case 4:
        cout << "El día de la semana es Jueves" << endl;
        break;
    case 5:
        cout << "El día de la semana es Viernes" << endl;
        break;
    case 6:
        cout << "El día de la semana es Sábado" << endl;
        break;
    case 7:
        cout << "El día de la semana es Domingo" << endl;
        break;    
    default:
        cout << "El número ingresado no es correcto, ingrese el número que se solicita" << endl;
    }

    return 0;
}