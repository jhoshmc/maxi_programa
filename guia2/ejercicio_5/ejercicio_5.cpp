/*
Hacer un programa para ingresar un número y mostrar por pantalla un cartel aclaratorio si el mismo es PAR O IMPAR
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero;
  cout << "\t Ingrese un numero entero \n";
  cout <<"Ingresa el numero: ";
  cin >> numero;
  if((numero % 2) == 0){
    cout << " El numero es par";
  }else{
    cout << "El numero es impar";
  }

  return 0;
}