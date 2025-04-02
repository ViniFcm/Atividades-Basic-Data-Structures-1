#include <iostream>
#include "elementoMaisFrequente.h"
using namespace std;

int main(){
  int testesPassados = 0;

  int arr1[] = {3,1,2,2,3,3};
  cout << "Teste 1: O resultado esperado é 3 e o valor retornado foi "
  <<elementoMaisFrequente(arr1, 6) << endl;
  if(elementoMaisFrequente(arr1, 6) == 3) testesPassados++;

  int arr2[] = {5,4,4,5,5,4};
  cout << "Teste 2: O resultado esperado é 4 ou 5 e o valor retornado foi "
  <<elementoMaisFrequente(arr2, 6) << endl;
  if(elementoMaisFrequente(arr2, 6) == 4 || elementoMaisFrequente(arr2, 6) == 5 ) testesPassados++;

  int arr3[] = {0,1,0,0,1,1,1};
  cout << "Teste 3: O resultado esperado é 1 e o valor retornado foi "
  <<elementoMaisFrequente(arr3, 7) << endl;
  if(elementoMaisFrequente(arr3,7 ) == 1) testesPassados++;

  int arr4[] = {1,2,3,4,5};
  cout << "Teste 4: O resultado esperado é qualquer elemento (pois todos têm a mesma frequência) e o valor retornado foi "
  <<elementoMaisFrequente(arr4, 5) << endl;
  if(elementoMaisFrequente(arr4, 5) <= 5 && elementoMaisFrequente(arr4,5) >=1) testesPassados++;

  int arr5[] = {7,8,7,8,7,8,8};
  cout << "Teste 5: O resultado esperado é 8 e o valor retornado foi "
  <<elementoMaisFrequente(arr5, 7) << endl;
  if(elementoMaisFrequente(arr5, 7) == 8) testesPassados++;

  cout<<"A sua implementação passou em " <<testesPassados << " de 5 testes."
  << endl;

  return 0;
}
