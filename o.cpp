#include <iostream>

using namespace std;

int main() {
  // Resolver el problema de hablar con la p

  string frase, reemplazar, cambiar;
  int i;

  reemplazar = "";
  cout << "Digite una frase ";
  getline(cin, frase, '\n');

  for (int i = 0; i < frase.length(); i++)
    if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' ||
        frase[i] == 'o' || frase[i] == 'u')
      reemplazar = reemplazar + frase[i] + "p" + frase[i];

    else

      reemplazar += frase[i];

  cout << reemplazar << endl;
  return 0;
}