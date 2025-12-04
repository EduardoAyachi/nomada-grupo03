// 4. Lee un día y mes cualquiera y determina la estación a la
// que pertenece.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int dia, mes;

    cout << "Ingrese un día: ";
    cin >> dia;
    cout << "Ingrese un mes: ";
    cin >> mes;

    string estacion;
    if (dia <=0 || mes <= 0){
        cout << "Datos erroneos" << endl;
    } else{    
    
    switch (mes){
    case 1:
        estacion = (dia <= 31)? "Verano" : "Fecha invalida";
        break;
    case 2:
        estacion = (dia <= 29)? "Verano" : "Fecha invalida";
        break;
    case 3:
        estacion = (dia <= 20)? "Verano" : (dia <= 31)? "Otoño" : "Fecha invalida";
        break;
    case 4: 
        estacion = (dia <= 30)? "Otoño" : "Fecha invalida";
        break;
    case 5:
        estacion = (dia <= 31)? "Otoño" : "Fecha invalida";
        break;
    case 6:
        estacion = (dia <= 20)? "Otoño": (dia <= 30)? "Invierno" : "Fecha invalida";
        break;
    case 7:
        estacion = (dia <= 31)? "Invierno" : "Fecha invalida";
        break;
    case 8:
        estacion = (dia <= 31)? "Invierno" : "Fecha invalida";
        break;
    case 9:
        estacion = (dia <= 21)? "Invierno" : (dia <= 30)? "Primavera" : "Fecha invalida";
        break;
    case 10:
        estacion = (dia <= 31)? "Primavera" : "Fecha invalida";
        break;
    case 11:
        estacion = (dia <= 30)? "Primavera" : "Fecha invalida";
        break;
    case 12:
        estacion = (dia <= 21)? "Primavera" : (dia <= 31)? "Verano" : "Fecha invalida";
        break;
    default:
        estacion = "Ingrese un mes valido";
    
    }

    cout << "La estación del año es: " << estacion << endl;    
} 
    return 0;
}