
#include <iostream>

using namespace std;

int main(void){

int ndia;

cout << "Mostrar el dia de la semana" << endl;
cout << "Digite el entero del dia que desea" << endl;
cin >> ndia;



if (ndia == 1){

cout << "Lunes" << endl;

}

else
if (ndia == 2){

cout << "Martes" << endl;
}

else
if (ndia == 3){

cout << "Miercoles" << endl;

}

else
if (ndia == 4){

cout << "Jueves" << endl;

}

else
if (ndia == 5){

cout << "Viernes" << endl;

}

else
if (ndia == 6){

cout << "Sabado" << endl;

}

else
if (ndia == 7)
  {

cout << "Domingo" << endl;

} 

else{

cout << "Error, por favor verifique los datos ingresados" << endl;
    
}
  return 0;

}