// 4. Dadas 3 longitudes, comprueba si pueden formar un triángulo.
// Luego, clasifica el tipo de triángulo es según sus lados.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    double lado1, lado2, lado3;

    cout << "Ingrese la primera longitud: ";
    cin >> lado1;
    cout << "Ingrese la segunda longitud: ";
    cin >> lado2;
    cout << "Ingrese la tercera longitud: ";
    cin >> lado3;

    if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1){
        cout << "No forman ningún triángulo." << endl;
        return 0;
    }

    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
        cout << "Las longitudes forman un \033[4mTriángulo equilátero.\033[0m" << endl;
    }else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        cout << "Las longitudes forman un \033[4mTriángulo isósceles.\033[0m" << endl;
    } else{
        cout << "Las longitudes forman un \033[4mTriángulo escaleno.\033[0m" << endl;
    }
    

    return 0;
}