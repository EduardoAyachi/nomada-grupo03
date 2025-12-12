// 4. Encuentra el mayor valor de tres números dados.

#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
      int num1, num2, num3;

      cout << "Ingrese el primer número: ";
      cin >> num1;
      cout << "Ingrese el segundo número: ";
      cin >> num2;
      cout << "Ingrese el tercer número: ";
      cin >> num3;

      int mayor = num1;

      if (num2 > mayor){
        mayor = num2;
      }
      if (num3 > mayor){
        mayor = num3;
      }
      cout << "El mayor numero es: " << mayor << endl;


    return 0;
}