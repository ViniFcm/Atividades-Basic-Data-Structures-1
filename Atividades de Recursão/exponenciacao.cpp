#include <iostream>

 int expo(int X, int Y) {
     if(Y == 0) return 1;
     else return X * expo(X, Y-1);
 }
 
int main() {
  int check = 0;
     if(expo(2, 3) == 8)check++;
     if(expo(0, 5) == 0)check++;
     if(expo(5, 0) == 1)check++;
     if(expo(6, 2) == 36)check++;
     if(expo(2, 10) == 1024)check++;

     if(check == 5){
      std::cout<<"Passou"<<std::endl;
     }
     else std::cout<<"Lascou para você!";
  
    return 0;
 }