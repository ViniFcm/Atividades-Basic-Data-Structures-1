#include "mediaArray.h"
double mediaArray(int arr[], int tamanho){
  int soma = 0;

  for(int i = 0; i < tamanho; i++) soma += arr[i];
  return soma/double(tamanho);
}