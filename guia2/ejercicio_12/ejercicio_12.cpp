/*
Hacer un programa para ingresar un valor que estará expresado en minutos . 
Si los minutos superan los 60, pasa el valor a horas, de lo contrario dejarlo en minutos.
Mostrar el resultado en pantalla aclarando si se muestran minutos y horas.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  float valor;
  int const minutos = 60;
  cout << "\t Ingrese un valor entero \n";
  cout << "ingrese el valor: ";
  cin >> valor;
  if (valor > 60)
  {
    valor /= 60;
    cout << "Horas: " << valor << endl;
  }else{
    cout << "Minutos: " << valor << endl;
  }
  

  return 0;
}