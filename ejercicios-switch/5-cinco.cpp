// 5. Lee un mes y año y determina cuántos días tiene ese mes.
// Fórmula para años bisiestos: (año % 400 == 0) || (año % 4 == 0 && 100 != 0)
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int mes, anio;
    cout << "Ingrese un mes (1-12): ";
    cin >> mes;
    cout << "Ingrese un año: ";
    cin >> anio;

    if (mes < 1 || mes > 12){
        cout << "Mes inválido." << endl;
        return 0;
    }

    bool bisiesto = (anio % 400 == 0) || (anio % 4 == 0 && 100 != 0);
    int dias = 0;

    switch (mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11: dias = 30;
            break;
        case 2: dias = bisiesto ? 29 : 28; // operador ternario
            break;
        default: dias = 0;
            break;    
    }

    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << endl;

    return 0;
}
