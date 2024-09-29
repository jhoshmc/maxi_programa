/*
Hacer un programa para mostrar los números del 10 al 1. No se debe realizar ningún pedido de datos. USANDO WHILE.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int i = 10;
  while (i>0)
  {
    cout << "el numero: " << i << endl;
    i--;
  }
  

  return 0;
}