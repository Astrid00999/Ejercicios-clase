#include <iostream>

using namespace std;

int main(void) {
  // Indicar un programa que solicite al usuario el numero del inicio y fin del
  // intervalo, luego pedir un numero c y se verificará si el numero ingresado
  // esta en el rango del intervalo.

  int a, b, c, intervalo;

  cout << "Ingrese un numero para indicar el inicio del intervalo: ";
  cin >> a;

  cout << "Ingrese un numero para indicar el inicio del intervalo: ";
  cin >> b;

  cout << " Su intervalo es [" << a << "," << b << "]" << endl;

  cout << "Ingrese un numero para verificar si está dentro del intervalo: ";
  cin >> intervalo;

  if (intervalo < a || intervalo > b) {
    cout << "El numero que ingreso no está dentro del intervalo";

  }

  else {  
       cout << "El numero que ingreso está dentro del intervalo";
  }

  return 0;
}