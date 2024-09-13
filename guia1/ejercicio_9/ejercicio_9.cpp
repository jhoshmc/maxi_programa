/*
Una universidad desea conocer los porcentajes de mujeres y hombres en las carreras de ciencias exactas.
Se solicira un programa para cargar la cantidad de mujeres y la cantidad de hombres y que el mismo calcule y emita por pantalla los porcentajes correspondientes. 
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){

  int cantidad_Hombres;
  int cantidad_Mujeres;
  int total_personas;
  float porcentaje_hombres;
  float porcentaje_mujeres;
  cout << "Ingrese el numero total de hombres: ";
  cin >> cantidad_Hombres;
  cout << "Ingrese el numero total de mujeres: ";
  cin >> cantidad_Mujeres;
  total_personas = cantidad_Hombres + cantidad_Mujeres;

  porcentaje_hombres = (cantidad_Hombres * 100) / total_personas;
  porcentaje_mujeres = 100 - porcentaje_hombres;

  cout << "porcentaje de hombres en la carrera: " << porcentaje_hombres << "%";
  cout << "\n";
  cout << "porcentaje de mujeres en la carrera: " << porcentaje_mujeres << "%";
  return 0;
}