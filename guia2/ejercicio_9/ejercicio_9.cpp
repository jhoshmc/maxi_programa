/*
Hacer un programa para ingresar cinco numeros distintos y luego mostrar por pantalla
el mayor y menor de ellos
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1, n2, n3, n4, n5;
  int numero_mayor = 0;
  int numero_menor = 0;

  cout << "\t Ingrese numeros enteros\n";
  cout << "Ingrese el priner numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  cout << "Ingrese el cuarto numero: ";
  cin >> n4;
  cout << "Ingrese el quinto numero: ";
  cin >> n5;

  if (n1>n2)
  {
    numero_mayor = n1;
    numero_menor = n2;
  }else{
    numero_mayor = n2;
    numero_menor = n1;
  }
  if (n3> numero_mayor)
  {
    numero_mayor = n3;
  }else if (n3< numero_menor)
  {
    numero_menor = n3;
  }

  if (n4>numero_mayor)
  {
    numero_mayor = n4;

  }else if (n4<numero_menor)
  {
    numero_menor = n4;
  }

  if (n5> numero_mayor)
  {
    numero_mayor = n5;
  }else if (n5 <numero_menor)
  {
    numero_menor = n5;
  }
  cout << "El numero mayor es: " << numero_mayor << endl;
  cout << "El numero menor es: " << numero_menor << endl;

  return 0;
}