// 2. Crea un programa que pida la temperatura de una ciudad y
// determine si es frío (menos de 10 grados), templado
// (entre 10 y 25 grados) o caliente (más de 25 grados).

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    float temperatura;

    cout << "\033\t[4mDetermine la temperatura de su ciudad en ºC\033[0m\n";
    cout << "Ingrese la temperatura: ";
    cin >> temperatura; 

    if ( temperatura < 10){
        cout << "La temperatura de su ciudad es fria" << endl; 
    } else if (temperatura >= 10 && temperatura <= 25){
        cout << "La temperatura de su ciudad esta templado" << endl;
    } else {
        cout << "La temperatura de su ciudad es caliente" << endl;
    }
    return 0;
}

