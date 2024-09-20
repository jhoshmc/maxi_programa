/**
 Hacer un programa que solicite cuatro números y emitir un cartel aclaratorio si son todos iguales entre si, caso contrario, no imprimir nada.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1, n2, n3, n4;

  cout << "\t Ingrese numeros enteros\n ";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  cout << "Ingrese el cuarto numero: ";
  cin >> n4;

  if (n1 == n2 && n2 == n3 && n3 == n4)
  {
    cout << "todos los numeros son iguales " << endl;
  }
  

  return 0;
}