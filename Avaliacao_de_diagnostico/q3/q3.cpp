#include <iostream>
#include "faotial.h"
using namespace std;

int main(){
  int testesPassados = 0;

  cout << "Teste 1: O resultado espera é 120 e o valor retonado foi "
  << fatorial(5) << endl;
  if( fatorial(5) == 120) testesPassados++;

  cout << "Teste 2: O resultado esperado é 1 e o valor retornado foi "
  << fatorial(0) << endl;
  if(fatorial(0) == 1) testesPassados++;

  cout << "Teste 3: O resultado esperado é 1 e o valor retornado foi "
  << fatorial(1) << endl;
  if(fatorial(1) == 1) testesPassados++;

  cout<<"Teste 4: O resultado esperado é 6 e o valor retornado foi "
  << fatorial(3) << endl;
  if(fatorial(3) == 6) testesPassados++;

  cout<<"Teste 5: O resultado esperado é 3628800 e o valor retornado foi "
  << fatorial(10) << endl;
  if(fatorial(10) == 3628800) testesPassados++;

  cout<<"A sua implementação passou em " << testesPassados << " de 5 testes."
  <<endl;

  return 0;
}