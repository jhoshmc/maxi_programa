/*
Hacer un progrma que solicite una lista de números qye corta cuando se ingresa un cero y luego mostrar por pantallael monor y el segundo menor
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
  int numero;
  int menor1=0,menor2=0;
  bool bandera= false;
  int i=0;
  cout <<"ingrese el numero: ";
  cin>>numero;
  menor1=numero;
  while(numero != 0){
    if(numero < menor1){
      if(!bandera && i>0){
        menor2=menor1;
        menor1=numero;
        bandera=true;
      }else{
        menor2=menor1;
        menor1=numero;
      }
    }else if(!bandera && i>0){
      menor2=numero;
      bandera=true;
    } else if(numero < menor2){
      menor2=numero;
    }
    i++;
    // if(numero < menor1){
    //   menor2= menor1;
    //   menor1= numero;
    // }else if(!bandera){
    //   menor2= numero;
    //   bandera= true;
    // }else if(numero < menor2){
    //   menor2= numero;
    // }
    cout<<"ingrese el numero: ";
    cin>>numero;
  }

  cout<<"el primer numero menor es: "<<menor1<<endl;
  cout<<"el segndo numero menor es: "<<menor2<<endl;
}