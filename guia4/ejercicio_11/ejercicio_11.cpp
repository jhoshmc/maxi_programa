/*
hacer un programa para ingresar 10 números y luego calcule y emita el mayor de los primos de la lista. En caso de no haber ningun número primo, deberá aclararlo con un cartel
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int maxPrimo = 0;
  int numero;
  int contador = 0;
  bool bandera = false;
  for (int i = 0; i < 10; i++)
  {
    cout << i + 1 << " Ingrese el numero: ";
    cin >> numero;
    if (numero == 2)
    {
      maxPrimo = numero;
      bandera = true;
    }
    
    if (numero != 1)
    {
      for (int j = 2; j < numero; j++)
      {
        if (numero % j == 0)
        {
          contador++;
          break;
        }
        
      }
      if (contador > 0)
      {
        if (bandera == false)
        {
          maxPrimo = numero;
          bandera = true;
        }else if (numero > maxPrimo)
        {
          maxPrimo = numero;
        }
        
        
      }
      
      
    }
    
  }

  if (maxPrimo > 0)
  {
    cout << "El numero primo maximo es: " << maxPrimo << endl;
  }else{
    cout << "No hay numeros primos" << endl;
  }
  
  

  return 0;
}