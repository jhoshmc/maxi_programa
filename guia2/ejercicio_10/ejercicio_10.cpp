/*
Hacer un programa para ingresar cuatro numeros y luego mostrar por pantalla cuales son mayores a 100
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1, n2, n3, n4;
  int const numero = 100;
  cout << "\t Ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  cout << "Ingrese el cuarto numero: ";
  cin >> n4;
  cout << "Los numeros mayuores a " << numero << " son: " << endl;
  if (n1 > numero)
  {
    cout << n1<<" ";
  }
  if (n2> numero)
  {
    cout << n2<<" ";
  }
  if (n3> numero)
  {
    cout << n3<<" ";
  }
  if (n4> numero)
  {
    cout << n4<<" ";
  }
  
  
  
  
  return 0 ;
}