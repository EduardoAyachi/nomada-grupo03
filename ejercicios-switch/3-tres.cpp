// 3. Ingresa el día y mes de nacimiento de una persona y di
// cuál es su signo del zodiaco.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int dia, mes;

    cout << "Signo Zodiacal\n";
    cout << "\nIngrese el día: ";
    cin >> dia;
    cout << "\nIngrese el mes: ";
    cin >> mes;

    string signo;
    if (dia <= 0){
        cout << "Ingrese un día valido";
    } else {

    switch (mes){
    case 1:
        signo = (dia <= 19)? "Capricornio" : (dia <= 31)? "Acuario" : "Fecha invalida";
        break;
    case 2:
        signo = (dia <= 18)? "Acuario" : (dia <= 29)? "Piscis" : "Fecha invalida";
        break;
    case 3:
        signo = (dia <= 20)? "Piscis" : (dia <= 31)? "Aries" : "Fecha invalida";
        break;
    case 4:
        signo = (dia <= 19)? "Aries" : (dia <= 30)? "Tauro" : "Fecha invalida";
        break;
    case 5:
        signo = (dia <= 20)? "Tauro" : (dia <= 31)? "Géminis" : "Fecha invalida";
        break;
    case 6:
        signo = (dia <= 20)? "Géminis" : (dia <= 30)? "Cáncer" : "Fecha invalida";
        break;
    case 7:
        signo = (dia <= 22)? "Cáncer" : (dia <=31)? "Leo" : "Fecha invalida";
        break;
    case 8:
        signo = (dia <= 22)? "Leo" : (dia <= 31)? "Virgo" : "Fecha invalida";
        break;
    case 9:
        signo = (dia <= 22)? "Virgo" : (dia <=30)? "Libra" : "Fecha invalida";
        break;
    case 10:
        signo = (dia <= 22)? "Libra" : (dia <=31)? "Escorpio" : "Fecha invalida";
        break;;
    case 11:
        signo = (dia <= 21)? "Escorpio" : (dia <= 30)? "Sagitario" : "Fecha invalida";
        break;
    case 12:
        signo = (dia <= 21)? "Sagitario" : (dia <= 31)? "Capricorno" : "Fecha invalida";
        break;
    default:
        signo = "Ingrese un mes valido";
    }
    cout << "Tú signo zodiacal es: " << signo << endl;
    }
    return 0;
}