
#include <iostream>
using namespace std;

int main() {
//   Invertir una cadena
int i;
string frase,frasei;

cout << "Invertir una cadena" << endl;
cout << "Digite una frase" << endl;
getline(cin, frase, '\n');

for(i = frase.length(); i >= 0; i--)
frasei += frase[i -1];


cout << "La frase es: " << frasei << endl;

      return 0;
}

