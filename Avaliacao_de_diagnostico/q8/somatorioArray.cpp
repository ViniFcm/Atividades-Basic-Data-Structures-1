#include "somatorioArray.h"
int somatorioArray(int arr[], int tamanho){
  int somatorio = 0;
  for(int i = 0; i < tamanho; i++) somatorio += arr[i];
  return somatorio;
}