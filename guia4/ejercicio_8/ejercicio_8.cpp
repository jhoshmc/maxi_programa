/*
hacer un programa que solicite 20 numeros y luego mostrar por pantalla el menor de ellos y la posicion en la que fue encontrado.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero, menor=0, posicion;
  bool bandera = false;

  for (int i = 0; i < 20; i++)
  {
    cout << i + 1 << " Ingrese el numero: ";
    cin >> numero;
    if (bandera == false)
    {
      menor = numero;
      posicion = i + 1;
      bandera = true;
      
    }else if (numero < menor)
    {
      menor = numero;
      posicion = i + 1;
      
    }
    
    
  }

  cout << "El numero que es menor es: " << menor << " en la posicion: " << posicion << endl;

  return 0;
}