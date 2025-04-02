#include <iostream>
#include "ehPar.h"
using namespace std;
int main(){
  int testesPassados = 0;
  setlocale(LC_ALL,""); // Pega a codificação da maquina

    cout << "Teste 1: O resultados esperado é 1 e o valor retornado foi "
<< ehPar(4) <<endl;
    if(ehPar(4) == true) testesPassados++;

    cout << "Teste 2: O resultado espera é 0 e o valor retornado foi "
<< ehPar(7) << endl;
  if(ehPar(7) == false) testesPassados++;

    cout << "Teste 3: O resultado esperado é 1 e o valor retornado foi "
<< ehPar(0) << endl;
    if( ehPar(0) == true) testesPassados++;

    cout<< "Teste 4: O resultado esperado é 0 e o valor retornado foi "
<< ehPar(-5) << endl;
    if(ehPar(-5) == false) testesPassados++;

    cout<< "Teste 5: O resultado esperado é 1 e o valor retornado foi "
<< ehPar(-8) << endl;
    if(ehPar(-8) == true) testesPassados++;

    cout<< "Sua implementação passou em " << testesPassados << " de 5 testes."
    << endl;
    return 0;
}