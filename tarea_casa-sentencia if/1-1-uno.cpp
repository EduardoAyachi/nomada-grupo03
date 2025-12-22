// Los trabajadores de una fábrica tienen tres turnos: mañana, tarde y noche. La tarifa de los turnos de la mañana 
// y tarde son iguales, mientras que de noche son 30% mayores. Construye un programa que lea el número de horas laboradas
// por un trabajador y su tarifa. Calcula el salario semanal. Considera que durante la semana el trabajador se
// encuentra siempre en el mismo turno.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    char turno;
    double horas, salario = 0,tarifa = 0;

    cout << "\t\033[33;4mCalcule tu salario laboral\033[0m\n";
    cout << "\nElige tu turno laboral de la semana\n";
    cout << "Mañana (m), Tarde (t), Noche (n): ";
    cin >> turno;
    cout << "Ingrese la tarifa de tu hora: ";
    cin >> tarifa;
    cout << "Ingresa tus horas laboradas de la semana: ";
    cin >> horas;

    if (turno == 'm' && turno == 'M' && turno == 't' && turno == 'T' && turno == 'n' && turno == 'N'){
        cout << "El turno escogido es inválido." << endl;
        return 0;
    }

    if (horas <= 0 || tarifa <= 0){
        cout << "Ingrese una hora y/o tarifa correcta." << endl;
        return 0;
    }

    if (turno == 'm' && turno == 'M'){
        salario = tarifa * horas;
        cout << "El salario semanal de tu turno correspondiente es: " << salario << endl;
    } else if (turno == 't' && turno == 'T'){
        salario = tarifa * horas;
        cout << "El salario semanal de tu turno correspondiente es: " << salario << endl;
        
    } else {
        salario = (tarifa + tarifa * 0.3) * horas;
        cout << "El salario semanal de tu turno correspondiente es: " << salario << endl;
    }

    // if (turno == 'm' && turno == 'M' || turno == 't' && turno == 'T'){
    //     salario = tarifa * horas;
    //     // cout << "El salario semanal de tu turno correspondiente es: " << salario << endl;
    // } else if (turno == 'n' && turno == 'N'){
    //     salario = (tarifa + tarifa * 0.3) * horas;
    //     // cout << "El salario semanal de tu turno correspondiente es: " << salario << endl;
    // } else {
    //     cout << "El turno escogido es inválido." << endl;
    // }

    // cout << "El salario semanal de tu turno correspondiente es: " << salario << endl;

    return 0;
}