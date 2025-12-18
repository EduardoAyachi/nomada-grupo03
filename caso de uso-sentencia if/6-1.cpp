// 6. Dada la hora del día en horas, minutos y segundos, encuentre la
// hora del siguiente segundo.
// hh/mm/ss => int

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    int hh, mm, ss;

    cout << "Ingresa la hora del día (0-23): ";
    cin >> hh;
    cout << "Ingresa los minutos (0-59): ";
    cin >> mm;
    cout << "Ingresa los segundos (0-59): ";
    cin >> ss;

    if (cin.fail()){
        cout << "Error: Ingrese un número entero y que sea positivo" << endl;
        return 0;
    }

    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59){
        cout << "Hora esta fuera del rango" << endl;
        return 0;
    }

    ss++;

    if (ss == 60){
        ss = 0;
        mm++;
        if (mm == 60){
            mm = 0;
            hh++;
            if (hh == 24){
                hh = 0;
            }
        }    
    }    
    cout << "La hora al segundo siguiente es: " << hh << " : " << mm << " : " << ss << endl;

    return 0;
}