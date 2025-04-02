#include "contarDivisivelpor3e5.h"

int contarDivisivelpor3e5(int N){
  int contador = 0 ;
  for(int i = 1; i <= N; i++){
    if(i % 15 == 0) contador++;
  }
  return contador;
}