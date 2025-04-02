#include <iostream>
#include "somatorioArray.h"
using namespace std;



int main(){
  int testesPassados = 0;

  int arr1[] = {1,2,3,4};
  cout<< "Teste 1: O resultado esperado é 10 e o valor retornado foi "
  << somatorioArray(arr1, 4) << endl;
  if(somatorioArray(arr1, 4) == 10) testesPassados++;

  int arr2[] = {5,5,5,5};
  cout<< "Teste 2: O resultado esperado é 20 e o valor retornado foi "
  << somatorioArray(arr2, 4) << endl;
  if(somatorioArray(arr2, 4) == 20) testesPassados++;

  int arr3[] = {0,0,0,0};
  cout<< "Teste 3: O resultado esperado é 0 e o valor retornado foi "
  << somatorioArray(arr3, 4) << endl;
  if(somatorioArray(arr3, 4) == 0) testesPassados++;

  int arr4[] = {-1,-2,-3,-4};
  cout<< "Teste 4: O resultado esperado é -10 e o valor retornado foi "
  << somatorioArray(arr4, 4) << endl;
  if(somatorioArray(arr4, 4) == -10) testesPassados++;

  int arr5[] = {100,200,300};
  cout<< "Teste 5: O resultado esperado é 600 e o valor retornado foi "
  << somatorioArray(arr5, 3) << endl;
  if(somatorioArray(arr5, 3) == 600) testesPassados++;

  cout << "Sua implementação passou em " << testesPassados << " de 5 testes."
  << endl;
  return 0;
}