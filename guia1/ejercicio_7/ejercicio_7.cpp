/* Hacer un programa para ingresar por teclado los metros cuadrados totales de un
de un predio y los metros cuadrados cubiertos; luego calcular y mostrar por pantalla
el porcentaje de metros cuadrados cubiertos y el porcentaje de metros cuadrados descubiertos.
*/
#include <iostream>
using namespace std;
int main(int argc, char const *arvg[]){
  float metros_Totales;
  float metros_Cubiertos;
  float porcentaje_Metros_Cubiertos;
  float porcentaje_Metros_Descubiertos;
  cout << "Ingrese los metros totales: ";
  cin >> metros_Totales;
  cout << "Ingrese los metros cubiertos: ";
  cin >> metros_Cubiertos;
  porcentaje_Metros_Cubiertos = (metros_Cubiertos * 100) / metros_Totales;
  porcentaje_Metros_Descubiertos = (100 - porcentaje_Metros_Cubiertos);

  cout << "El porcentaje de metros cubiertos es de: " << porcentaje_Metros_Cubiertos << "%";
  cout << "\n";
  cout << "El porcentaje de metros sin cubrir es de: " << porcentaje_Metros_Descubiertos<<"%";
  return 0;
}