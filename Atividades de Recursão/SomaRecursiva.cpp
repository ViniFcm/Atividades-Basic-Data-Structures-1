#include <iostream>

 int soma(int X, int Y) {
     if(Y == 0) return X;
     else return 1 + soma(X, Y-1);
 }
 
int main() {
  int check = 0;
     if(soma(3, 4) == 7) check++;
     if(soma(0, 5) == 5)check++;
     if(soma(5, 0) == 5)check++;
     if(soma(3, 6) == 9)check++;
     if(soma(7, 3) == 10)check++;

     if(check == 5){
      std::cout<<"Passou"<<std::endl;
     }
     else std::cout<<"Lascou para você!";
  
    return 0;
 }
 