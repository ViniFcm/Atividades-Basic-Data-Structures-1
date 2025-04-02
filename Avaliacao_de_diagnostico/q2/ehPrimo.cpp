#include "ehPrimo.h"

bool ehPrimo(int numero){
  int contador = 0;
  for(int i = 1; i < numero; i++){
    if(numero % i == 0) contador++;
  }
  if(numero != 1 && contador == 1) return true;
  else return false;
}