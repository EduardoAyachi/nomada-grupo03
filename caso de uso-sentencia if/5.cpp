// 5. Escribe un algoritmo que lea el promedio de un alumno y diga cuál
// es su rendimiento, considera: datos erróneos, rendimiento pésimo,
// rendimiento deficiente, rendimiento regular, rendimiento bueno.
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    float promedio = 0;
    cout << "Ingrese el promedio el alumno: ";
    cin >> promedio;

    if (cin.fail()){
        cout << "Error: Debes ingresar un número." << endl;
        return 0;
    }

    if (promedio < 0 || promedio > 20){
        cout << "Ingreso datos erroneos, ingrese números del 1-20" << endl;
        return 0;}

    if (promedio <= 5){
        cout << "El alumno tiene un rendimineto pésimo." << endl;
    }else if (promedio <=11){
        cout << "El alumno tiene un rendimiento deficiente." << endl;
    }else if (promedio <=15){
        cout << "El alumno tiene un rendimieto regular" << endl;
    } else {
        cout << "El alumno tiene un rendimiento bueno" << endl;
    }

    return 0;
}