/*
Hacer un programa para ingresar dos números y que luego emita por pantalla el mayor de ellos con un cartel acaratorio "son iguales" en el caso de que asi sea.
NOTA: los numeros pueden ser iguales.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *arvg[]){
  int primer_numero;
  int segundo_numero;
  cout << "\t Ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> primer_numero;
  cout << "Ingrese el segundo numero: ";
  cin >> segundo_numero;

  if (primer_numero == segundo_numero)
  {
    cout << " Ambos numero son iguales";
  } else if (primer_numero > segundo_numero)
  {
    cout << "El primer numero es moyor";
  }
  else{
    cout << "El segundo numero es mayor";
  }
  
  

  return 0;
}