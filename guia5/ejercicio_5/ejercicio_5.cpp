/*
Hacer un programa que muestre los números del 1 al 100 de 5 en 5. ejemplo:
0,5,10,15,20,25....,100; usando while
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int i=0;
  while(i<=100){
    cout<<"numero: "<<i<<endl;
    i+=5;
  }

  return 0;
}