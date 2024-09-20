/*
Hacer un programa para ingresar tres números y emitir un cartel aclaratorio si la suma de los dos primeros es mayor al producto del segundo con el tercero.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1, n2, n3;
  int suma, producto;
  cout << "\t Ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  suma = n1 + n2;
  producto = n2 * n3;
  if (suma > producto)
  {
    cout << "La suma es mayor: " << suma << " > " << producto << endl;
  }else{
    cout << "El producto es mayor: " << suma << " < " << producto << endl;
  }
  
  return 0;
}