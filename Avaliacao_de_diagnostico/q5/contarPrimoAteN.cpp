#include "contarPrimoAteN.h"

int contarPrimosAteN(int N){
  int contadorTotalPrimos = 0;
  int contador_aux = 0;
  for(int i = 1; i <= N; i++){
    contador_aux = 0;
    for(int j = 1; j < i; j++){
      if(i%j == 0 && i != 1) contador_aux ++;
    }
    if(contador_aux == 1) contadorTotalPrimos++;
  }
  return contadorTotalPrimos;

}