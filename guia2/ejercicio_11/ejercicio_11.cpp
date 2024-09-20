/*
Hacer un programa para ingresar cuatro números y luego mostrar por pantalla cuántos son menores a 100
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1, n2, n3, n4;
  int contMenor = 0;

  cout << "\t Ingrese mumeros enteros\n ";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  cout << "Ingrese el cuarto numero: ";
  cin >> n4;

  if (n1<100)
  {
    contMenor++;
  }
  if (n2 < 100)
  {
    contMenor++;
  }
  if (n3<100)
  {
    contMenor++;
  }
  if (n4<100)
  {
    contMenor++;
  }

  cout << "La cantidad de numeros menores a 100 es de: " << contMenor << endl;

  return 0;
}