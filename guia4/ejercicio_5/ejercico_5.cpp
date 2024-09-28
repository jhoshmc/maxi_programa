/*
Hacer un programa que muerstre los números del 1 al 100 de 5 en 5, ejemplo: 0,5,10,15,20...,100
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  // int i = 0;
  // while (i<=20)
  // {
  //   cout << "numero: " << i << endl;
  //   i +=5;
  // }
  

  for (int i = 0; i <= 100; i+=5)
  {
    cout << "numero: " << i << endl;
  }
  
  return 0;
}