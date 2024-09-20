/*
Hacer un programa para  ingresar cuaro numeros distintos y luego mostrar por pantalla
el menor de ellos
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int n1;
  int n2;
  int n3;
  int n4;
  int numero_menor;
  

  cout << "\t ingrese numeros enteros \n";
  cout << "Ingrese el primer numero: ";
  cin >> n1;
  cout << "Ingrese el segundo numero: ";
  cin >> n2;
  cout << "Ingrese el tercer numero: ";
  cin >> n3;
  cout << "Ingrese el cuarto numero: ";
  cin >> n4;
  if (n1 < n2){
    numero_menor = n1;
  }else{
    numero_menor = n2;
  }
  if (n3<numero_menor)
  {
    numero_menor = n3;
  }
  if (n4 < numero_menor)
  {
    numero_menor = n4;
  }

  cout << "El numero menor es: " << numero_menor;

  return 0;
}