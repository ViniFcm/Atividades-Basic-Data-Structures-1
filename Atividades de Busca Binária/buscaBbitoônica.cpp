#include <iostream>

int buscaBinaria(const int arr[], int tamanho) {
    int inicio = 0;
    int fim =  tamanho -1;
    while (inicio <= fim){
      int pico = (inicio + fim)/2;
      if(arr[pico -1] < arr[pico] && arr[pico] > arr[pico + 1]) return pico;
      else if(arr[pico -1] < arr[pico] && pico == fim) return pico;
      else if(arr[pico +1] < arr[pico] && pico == inicio) return pico;
      else if(arr[pico -1] < arr[pico] && arr[pico] < arr[pico + 1] ){inicio = pico + 1;}
      else if(arr[pico -1] > arr[pico] && arr[pico] > arr[pico + 1] ){fim = pico -1;}
      
    }

    return -1;
}

int main(){
    int check =0;
    int arr1[] = {1, 2, 3, 2, 1};
    if(buscaBinaria(arr1, 5) == 2)check++;
    std::cout<<buscaBinaria(arr1, 5);
    int arr2[] = {1, 5, 3, 2, 1};
    if(buscaBinaria(arr2, 5) == 1)check++;
    std::cout<<buscaBinaria(arr2, 5);
    int arr3[] = {1, 1, 3, 5, 1};
    if(buscaBinaria(arr3, 5) == 3)check++;
    int arr4[] = {1, 1, 3, 4, 5};
    if(buscaBinaria(arr4, 5) == 4)check++;

    if(check == 4){
      std::cout<<"Passou!";
    }
    else std::cout<<"Falhou!";
    return 0;
}