/*
Hacer un programa que solicite 20 números y calcule y emita por pantalla cuantos son positivos (mayores a cero). Se deve mostrar un solo valor: el conteo final.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int numero,cont=0;
  cout << "\t Ingrese numeros enteros\n";
  for (int i = 0; i < 20; i++)
  {
    cout << "Ingrese el numero (" << i + 1 << "): ";
    cin >> numero;
    if (numero > 0)
    {
      cont++;
    }
    
  }
  cout << "El total de numeros positivos es de: " << cont << endl;

  return 0;
}