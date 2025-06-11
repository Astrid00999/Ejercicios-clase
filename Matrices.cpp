#include <iostream>

using namespace std;

int main() {
  int mat[50][50];
  int i, j;
  int m, n, acum;

  cout << "LLENAR UNA MATRIZ" << endl;
  cout << "Cuantas filas tendrá? " << endl;
  cin >> n;
  cout << "Cuantas columnas tendrá? " << endl;
  cin >> m;
  cout << "Digite los datos de la matriz. " << endl;

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
      cout << "mat[" << i << "][" << j << "]: " << endl;
      cin >> mat[i][j];
    }

  acum = 0;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      //   cout << mat[i][j] << " ";
       acum = acum + mat[i][j];
    }
    cout << endl;
  }

  cout << "La suma es: " << acum << endl;

  return 0;
}