/*
Hacer un programa qu solicite la edad de un grupo de personas. 
El programa deberá pedir edades hasta que se ingrese un aedad menor a 18 años .
Deberá mostrar pon pantall cuántas personas mayores se registraron.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int edad, contador=0;

  cout <<"ingrese una edad: ";
  cin>>edad;
  while(edad >= 18){
    contador++;
    cout<<"ingrese una edad: ";
    cin>> edad;
  }

  cout <<"el numero de edades mayores a 18 ingresadas son: "<<contador;

  return 0;
}