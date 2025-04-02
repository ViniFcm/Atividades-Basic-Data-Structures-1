#include <iostream>
#include "buscarElemento.h"
using namespace std;

int main(){
  int testesPassados = 0;
  int arr[] = {1,2,3,4,5};

  cout << "Teste 1: O resultado esperado é 2 e o valor retornado foi "
  << buscarElemento(arr, 5, 3) << endl;
  if(buscarElemento(arr, 5, 3) == 2) testesPassados++;

  cout << "Teste 2: O resultado esperado é -1 e o valor retornado foi "
  << buscarElemento(arr, 5, 6) << endl;
  if(buscarElemento(arr, 5, 6) == -1) testesPassados++;

  cout << "Teste 3: O resultado esperado é 0 e o valor retornado foi "
  << buscarElemento(arr, 5, 1) << endl;
  if(buscarElemento(arr, 5, 1) == 0) testesPassados++;

  cout << "Teste 4: O resultado esperado é 4 e o valor retornado foi "
  << buscarElemento(arr, 5, 5) << endl;
  if(buscarElemento(arr, 5, 5) == 4) testesPassados++;

  cout << "Teste 5: O resultado esperado é -1 e o valor retornado foi "
  << buscarElemento(arr, 5, -2) << endl;
  if(buscarElemento(arr, 5, -2) == -1) testesPassados++;

  cout << "Sua implementação passou em " << testesPassados << " de 5 testes."
  <<endl;

  return 0;

}