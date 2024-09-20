/*
Hacer un programa para ingresar un número y luego se emita un cartel por pantalla "Positivo" si el numero es mayor a cero, "Negativo" si el número es menor a cero o "Cero" si el número es igual a cero.
NOTA: requiere más de un if
*/

#include <iostream>
using namespace std;
int main(int argc,char const *argv[]){
  int primer_numero;
  int const cero = 0;
  cout << "\t ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> primer_numero;
 
  if (primer_numero == cero)
  {
    cout << "El numero es cero";
  }  else if(primer_numero> cero){
    cout << "El numero es positivo";
  }else{
    cout << "El numero es negativo";
  }
  
  return 0;
}