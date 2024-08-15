//*2  Hacer un programa para solicitar por teclado un número y luego devolver su
//* valor elevado al cubo.
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
  double numero =0;
  cout << "ingrese un numero: ";
  cin >> numero;
  double elevado = pow(numero, 2);
  cout << "El numero " << numero << " elevado al cuadrado es " << elevado;
  return 0;
}