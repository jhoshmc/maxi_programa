/*
Hacer un programa para ingresar un número y luego se emita por pantalla un cartel aclaratorio si "Es mayor a 10" o "No es mayor a 10"
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){

  int numero;
  cout << "Ingrese el numero: " << endl;
  cin >> numero;
  if(numero > 10){
    cout << " El numero es mayor a 10";
  }else{
    cout << "El numero es menor a 10";
  }

  return 0;
}