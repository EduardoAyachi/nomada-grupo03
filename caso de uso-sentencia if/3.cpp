// 3. Costo de una llamada telefónica. Una llamada telefónica cuesta S/. 0,5 por los primeros tres minutos o menos.
//Cada minuto adicional es un paso de contador y cuesta S/. 0,1. Calcula el monto de una llamada cualquiera.
// ceil -- investigar

#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

        double minuto;
        cout << "Ingrese los minutos de llamada: ";
        cin >> minuto;

        if (minuto <= 0){
            cout << "Duración de la llamada inválida." << endl;
            return 0;
        }

        double costo = 0.0;

        if (minuto <= 3.0){
            costo = 0.5;
        } else {
            double extra = minuto - 3.0;
            int minutosExtra = (int) ceil(extra);
            costo = 0.5 + minutosExtra * 0.1;
        }

        cout << "Costo de la llamada: S/. " << costo << endl;

    return 0;
}