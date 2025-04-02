#include <iostream>
#include "encontreMenorElemento.h"
using namespace std;


int main(){
  int testesPassados = 0;

  int arr[] = {3,1,4,1,5};
  cout << "Teste 2: O resultado esperado é 1 e o valor retornado foi "
  << encontreMenorElemento(arr, 5)<< endl;
  if(encontreMenorElemento(arr, 5) == 1) testesPassados++;

  int arr2[] = {10,20,5,15};
  cout << "Teste 2: O resultado esperado é 5 e o valor retornado foi "
  << encontreMenorElemento(arr2, 4)<< endl;
  if(encontreMenorElemento(arr2, 4) == 5) testesPassados++;

  int arr3[] = {-3,-1,-4,-2};
  cout << "Teste 3: O resultado esperado é -4 e o valor retornado foi "
  << encontreMenorElemento(arr3, 4)<< endl;
  if(encontreMenorElemento(arr3, 4) == -4) testesPassados++;

  int arr4[] = {7};
  cout << "Teste 4: O resultado esperado é 7 e o valor retornado foi "
  << encontreMenorElemento(arr4, 1)<< endl;
  if(encontreMenorElemento(arr4, 1) == 7) testesPassados++;

  int arr5[] = {0, 2, -1,3};
  cout << "Teste 4: O resultado esperado é -1 e o valor retornado foi "
  << encontreMenorElemento(arr5, 4)<< endl;
  if(encontreMenorElemento(arr5, 4) == -1) testesPassados++;

  cout << "A sua implementação passou em " << testesPassados << "de 5 testes."
  <<endl;
  return 0;

}