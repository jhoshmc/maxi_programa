/*
Una importante marca de computadoras permite elegir cierta configuración del equipo a comprar. Para ello existe la siguiente escala de pricios:
            i5 (1)      i7 (2)       i9 (3)
8  RAM(1)  USD 800     USD 900      USD 1200
16 RAM(2)  USD 900     USD 1000     USD 1400
32 RAM(3)  USD 1000    USD 1400     USD 2000

Además, el equipo viene con disco que permite almacenar 500 GB de información y que se puede ampliar a 1 TB si así lo desea, lo cual tiene un costo adicional de USD 300.
Hacer un programa que solicite la opción de procesador, la opción de memoria RAM,  y si extiende el disco o no (ingresea 1 para extender y 0 para no extender) y calcule y emita por pantalla el monto de la maquina seleccionada.
*/

#include <iostream>
#include <string>
using namespace std;
 int main(int argc, char const *argv[])
 {
   int ram, procesador, memoria;
   float total;
   string const menu = " \t i5 (1)    i7 (2)     i9 (3) \n 8 RAM (1) USD 800  USD 900 USD1200 \n 16 RAM (2) USD 900 USD 1000  USD 1400  \n 32 RAM(3)  USD 1000 USD 1400 USD2000 ";

   cout << menu<<endl;
   cout << "Ingrese el numero de RAM: ";
   cin >> ram;
   cout << "Ingrese el numero de procesador: ";
   cin >> procesador;
   cout << "Costo de apliar la memoria a 1T USD 300 (1: si , 0: No)" << endl;
   cin >> memoria;

   if (ram == 1 && procesador == 1)
   {
     total = 800;
   }else if (ram == 1 && procesador == 2)
   {
     total = 900;
   }else if (ram== 1 && procesador == 3)
   {
     total = 1200;
   }
   if (ram == 2 && procesador == 1)
   {
     total = 900;
   }else if (ram == 2 && procesador == 2)
   {
     total = 1000;
   }else if (ram== 2 && procesador == 3)
   {
     total = 1400;
   }
   if (ram == 3 && procesador == 1)
   {
     total = 1000;
   }else if (ram == 3 && procesador == 2)
   {
     total = 1400;
   }else if (ram== 3 && procesador == 3)
   {
     total = 2000;
   }
   
   if (memoria== 1)
   {
     total += 300;
   }

   cout << "El total a pagar es de: " << total << endl;

   return 0;
 }