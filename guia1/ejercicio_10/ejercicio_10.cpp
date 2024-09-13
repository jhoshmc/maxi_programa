/*
Hacer un programa que permita ingresar por teclado dos números y que luego muestre por pantalla la suma, la resta, la multiplicacion y la divicion de dichos números.
Se debin mostrar cuatro resultados en pantalla.
Los números deben ser solicitados una única vez.
*/
#include <iostream>
using namespace std;
int main(int argc, float const *argv[]){

  float numero1;
  float numero2;
  float suma;
  float resta;
  float multiplicacion;
  float divicion;

  cout << "Ingrese el primer numero: ";
  cin>> numero1;
  cout << "Ingrese el segundo numero: ";
  cin >> numero2;

  suma = numero1 + numero2;
  resta = numero1 - numero2;
  divicion = numero1 / numero2;
  multiplicacion = numero1 * numero2;
  cout << " los resultados son: \n";
  cout << "suma: " << suma<<"\n";
  cout << "resta: " << resta << "\n";
  cout << "multiplicacion: " << multiplicacion << "\n";
  cout << "divicion: " << divicion << "\n";

  return 0;
}