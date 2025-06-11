#include <iostream>

using namespace std;

int main() {
  int suma, prom,edades[100], i, n;

  cout << "Manejo de arreglos" << endl;
  cout << "Cuantas edades desea ingresar" << endl;
  cin >> n;

  cout << "Digite las" << n << "edades: " << endl;
  for (i = 0; i < n; i++) {
    cin >> edades[i];
  }

  cout << "El contenido del arreglo es: " << endl;
  for (i = 0; i < n; i++) {
    cout << edades[i] << endl;
  }

 for(i = 0; i < n; i ++)

 suma = 0;
prom = 0;

suma = suma + edades[i];
prom = suma / n;
cout << "El promedio es " << prom << endl;
  return 0;
}