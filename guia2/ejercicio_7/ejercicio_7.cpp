/*
Hacer un programa para ingresar cuatro números distintos y luego mostrar por pantalla el mayor de ellos.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *arvg[]){
  int primer_numero;
  int segundo_numero;
  int tercer_numero;
  int cuarto_numero;
  int numero_mayor;
  cout << "\t Ingrese numero enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> primer_numero;
  cout << "Ingrese el segundo numero: ";
  cin >> segundo_numero;
  cout << "Ingrese el tercer numero: ";
  cin >> tercer_numero;
  cout << "Ingrese el cuarto numero: ";
  cin >> cuarto_numero;

  if (primer_numero> segundo_numero && primer_numero > tercer_numero && primer_numero > cuarto_numero)
  {
    numero_mayor = primer_numero;
  }else if (segundo_numero > tercer_numero && segundo_numero> cuarto_numero )
  {
    numero_mayor = segundo_numero;
  }else if (tercer_numero > cuarto_numero)
  {
    numero_mayor = tercer_numero;
  }else{
    numero_mayor = cuarto_numero;
  }

  cout << "El numero mayor es: " << numero_mayor;

  return 0;
}