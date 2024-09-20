/*
Hacer un programa para ingresar 4 números. Luego analizar e informar por pantalla si los
mismos se encuentran ordenados do forma decreciente.
*/

#include <iostream>
using namespace std;
int main (int argc, char const *argv[])
{
  int n1, n2, n3, n4;
  cout << "\t ingrese numero enteros\n";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  cout << "Ingrese el caurto numero: ";
  cin >> n4;

  if (n1 > n2 && n2 > n3 && n2>n4)
  {
    cout << "Si esta ordenado de manera decreciente" << endl;
  }else{
    cout << "No esta ordenado de manera decreciente" << endl;
  }
  

  return 0;
}