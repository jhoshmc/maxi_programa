/*
Hacer un programa que solicite el ingreso de 10 números y que muestre el mayor de ellos por pantalla.Solo se deve emitir UN valor por pantalla.
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int mayor = 0;
  int numero;
  cout << "\t Ingrese numeros enteros\n";
  for (int i = 0; i < 10; i++)
  {
    cout << "ingrese el numero: ";
    cin >> numero;
    if (numero > mayor)
    {
      mayor = numero;
    }
    
  }

  cout << "el numero mayor es: " << mayor << endl;

  return 0;
}