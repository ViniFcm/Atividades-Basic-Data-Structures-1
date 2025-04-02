#include <iostream>
#include "contarDivisivelpor3e5.h"
using namespace std;

int main(){
  int testesPassados = 0;

  cout << "Teste 1: O resultado esperado é 1 e o valor retornado foi "
  << contarDivisivelpor3e5(15) << endl;
  if(contarDivisivelpor3e5(15) == 1) testesPassados ++;

  cout << "Teste 2: O resultado esperado é 2 e o valor retornado foi "
  << contarDivisivelpor3e5(30) << endl;
  if(contarDivisivelpor3e5(30) == 2) testesPassados ++;

  cout<< "Teste 3: O resultado esperado é 0 e o valor retornado foi "
  << contarDivisivelpor3e5(10) << endl;
  if(contarDivisivelpor3e5(10) == 0) testesPassados++;

  cout << "Teste 4: O resultado esperado é 3 e o valor retornado foi "
  << contarDivisivelpor3e5(45) << endl;
  if(contarDivisivelpor3e5(45) == 3) testesPassados++;

  cout << "Teste 5: O resultado esperado é 6 e o valor retornado foi "
  << contarDivisivelpor3e5(90) << endl;
  if(contarDivisivelpor3e5(90) == 6) testesPassados++;
  
  cout<<"A sua implementação passou em " << testesPassados << " de 5 testes."
  <<endl;
  
  return 0;

}
