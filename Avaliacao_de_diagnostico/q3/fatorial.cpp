#include "faotial.h"

int fatorial(int numero){
  if(numero != 0) return numero * fatorial(numero - 1);
  else return 1;
}