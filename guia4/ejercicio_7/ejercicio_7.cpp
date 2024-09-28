/*
Hacer un programa que solicite 10 numeros y luego mostrar por pantalla el maximo de ellos
y la posicion en la que fue ingresado.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero;
  int posicion = 0;
  int maximo = 0;

  for (int i = 0; i < 7; i++)
  {
    cout<<i+1 << " Ingrese el numero: ";
    cin >> numero;
    if (numero > maximo )
    {
      maximo = numero;
      posicion = i + 1;
    }
    
  }

  cout << "El numero mayor es: " << maximo << " en la posicion: " << posicion;

  return 0;
}