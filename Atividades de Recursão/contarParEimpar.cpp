#include <iostream>
#include <utility>


 std::pair<int, int> contarParImpar(int X) {
      int impar = 0;
      int par = 0;
     if(X <= 9 && X >=0){
      if(X % 2 == 0){
        return std::pair<int,int>(0,1);
      } 
      else{
        return std::pair<int,int>(1,0);
      }
     }
     else{
      if((X%10) % 2 == 0){
        par++;
        return contarParImpar(X/10);
      }
      else {
        impar ++;
        return contarParImpar(X/10);
      }
     } 
     
 }
 
int main() {
  int check = 0;

  auto resultado = contarParImpar(1234);
  if(resultado.first == 2 && resultado.second == 2) check++;

  resultado = contarParImpar(1264);
  if(resultado.first == 1 && resultado.second == 3) check++;

  resultado = contarParImpar(12644351);
  if(resultado.first == 4 && resultado.second == 4) check++;

  resultado = contarParImpar(22);
  if(resultado.first == 0 && resultado.second == 2) check++;

  resultado = contarParImpar(10);
  if(resultado.first == 1 && resultado.second == 1) check++;


    

     if(check == 5){
      std::cout<<"Passou"<<std::endl;
     }
     else std::cout<<"Lascou para você!";
  
    return 0;
 }