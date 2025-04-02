#include "elementoMaisFrequente.h"

int elementoMaisFrequente(int arr[], int tamanho){
  int valorMaisFrequente = 0;
  int contadorMaisFrequente = 0;
  int contador;

  for(int i = 0; i < tamanho; i++){
    contador = 0;
    for(int j = 0; j < tamanho; j++){
      if(arr[i] == arr[j]) contador++;
    }
    if(contador > contadorMaisFrequente){
      valorMaisFrequente = arr[i];
      contadorMaisFrequente = contador;
    }
  }

  return valorMaisFrequente;
}