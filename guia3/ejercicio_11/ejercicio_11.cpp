/*
Hacer un programa para ingresar tres numeros y luego mostrarlos ordenados de menor a mayor
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1, n2, n3, aux;

  cout << "\t Ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrse el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  if (n1<n2)
  {
    if (n2 > n3)
    {
      aux = n2;
      n2 = n3;
      n3 = aux;
    }
    
    
    
  }else if (n1 < n3)
  {
    aux = n2;
    n2 = n1;
    n1 = aux;
  }else{
    aux = n2;
    n2 = n3;
    n3 = n1;
    n1 = aux;
  }

  cout << "los numeros ordenados : " << n1 << " " << n2 << " " << n3 << endl;

  return 0;
}