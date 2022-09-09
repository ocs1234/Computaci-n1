// Author: Oscar Correa
// chaparrin_2001@hotmail.com

#include <iostream>
using namespace std;

#define N 10

int main() {

   //Def: de un arreglo llaves para inicializar arreglo con 0
   int arr[N];

   // Iterar el arreglo
   for(int i = 0; i < N; i++){

     arr[i] = i + i;
     cout << arr[i] << "\t";

   }

}