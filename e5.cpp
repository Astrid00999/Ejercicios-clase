#include <iostream>

using namespace std;

int main(void) {
  int a, b, c, residuoA, residuoB;

  cout << "Bienvenido usuario, por favor digite tres numeros este programa le "
          "indicara si los primeros dos son divisibles entre el tercero"
       << endl;
  cout << "Ingrese el primer numero" << endl;
  cin >> a;

  cout << "Ingrese el segundo numero" << endl;
  cin >> b;

  cout << "Ingrese su tercer numero" << endl;
  cin >> c;

residuoA = a % c;
residuoB =  b % c;

      if (residuoA != 0) {
       // cout << "Ambos numeros no son divisibles entre " << c << endl;

        cout << a << " No es divible entre " << c << endl; }
     if (residuoB != 0) {  
        cout << b << " No es divible entre " << c << endl;
         } 

  else {
    cout << " Ambos numeros son divisibles de " << c << endl;
  }

  return 0;
}