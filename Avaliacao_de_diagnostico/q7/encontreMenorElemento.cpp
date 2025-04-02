#include "encontreMenorElemento.h"

int encontreMenorElemento(int arr[], int tamanho){
  int menor = arr[0];
  for(int i = 0; i < tamanho; i++){
    if(arr[i] < menor) menor = arr[i];
  }
  return menor;
}