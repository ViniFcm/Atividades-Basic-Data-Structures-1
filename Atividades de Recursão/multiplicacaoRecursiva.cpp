#include <iostream>

 int multi(int X, int Y) {
     if(X == 0) return 0;
     else return Y + multi(X-1, Y);
 }
 
int main() {
  int check = 0;
     if(multi(3, 4) == 12)check++;
     if(multi(0, 5) == 0)check++;
     if(multi(5, 0) == 0)check++;
     if(multi(3, 6) == 18)check++;
     if(multi(7, 3) == 21)check++;

     if(check == 5){
      std::cout<<"Passou"<<std::endl;
     }
     else std::cout<<"Lascou para você!";
  
    return 0;
 }