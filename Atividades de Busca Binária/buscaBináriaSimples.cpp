/**Busca Binária Simples** (`buscaBinariaSimples.cpp`)
- **Descrição:** Implemente uma função que utiliza a busca binária para encontrar a posição de um elemento em um array ordenado de inteiros. A função deve retornar o índice do elemento, ou `-1` se o elemento não estiver presente no array.*/
#include <iostream>

int buscaBinaria(const int arr[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho -1;
    while(inicio <= fim){
      int meio = (inicio + fim)/2;
      if(alvo > arr[meio]) inicio = meio + 1;
      else if(alvo < arr[meio]) fim = meio - 1;
      else return meio;
    }
    return -1;
}

int main(){
    int check =0;
    int arr1[] = {1, 2, 3, 4, 5};
    if(buscaBinaria(arr1, 5, 3) == 2)check++;
    if(buscaBinaria(arr1, 5, 5) == 4)check++;
    if(buscaBinaria(arr1, 5, 1) == 0)check++;
    if(buscaBinaria(arr1, 5, 6) == -1)check++;

    if(check == 4){
      std::cout<<"Passou!";
    }
    else std::cout<<"Falhou!";
    return 0;
}
