#include "buscarElemento.h"
int buscarElemento(int arr[], int tamanho, int alvo){
  for(int i = 0; i < tamanho; i++){
    if(arr[i] == alvo) return i;
  }
  return -1;
}