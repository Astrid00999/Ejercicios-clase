#include <iostream>
using namespace std;

int main() {
//   Invertir una cadena
int i,j;
string frase,frasei, hola;
bool bandera;
cout << "Invertir una cadena" << endl;
cout << "Digite una frase" << endl;
getline(cin, frase, '\n');


// for(i = frase.length(); i >= 0; i--){
// frasei += frase[i -1];
// }

// for (i = frasei.length(); i>=0; i--){
// hola = frase + frasei[i - 1];
// }

// bandera = hola == frasei;

// cout << "La frase invertida es: " << frasei << endl;
// cout << "La frase es: " << frase << endl;

// if(bandera){

//   cout << "La frase es palindroma" << endl;
// }

// else{ 

//   cout <<" No es" << endl;
// }


i = 0;
j = frase.length() - 1;
bandera = true;

while(j < i){
while(frase[i] == ' ') i++;
while(frase[j] == ' ') j--;

  if (frase[i] != frase[j])
    bandera = false;

    i++;
    j--;
  
}

if(bandera)


  cout << "LA FRASE ES PALINDROME" << endl;


else 

cout << "LA FRASE NO ES PALINDROME" << endl;













      return 0;
}