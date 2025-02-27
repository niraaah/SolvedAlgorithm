#include <iostream>
#include <cmath>

int isTriangle(int a, int b, int c){
    if(a >= b && a >= c){
      if(pow(a, 2) == pow(b, 2) + pow(c, 2)){
        return 1;
      }
      else{
        return 0;
      }
    }
    else if(b >= a && b >= c){
      if(pow(b, 2) == pow(a, 2) + pow(c, 2)){
        return 1;
      }
      else{
        return 0;
      }
    }
    else{
      if(pow(c, 2) == pow(a, 2) + pow(b, 2)){
        return 1;
      }
      else{
        return 0;
      }
    }
}

int main() { 
  int a, b, c;

  while(true){

    std::cin >> a >> b >> c;
    
    if(a == 0 && b == 0 && c == 0){
        break;
    }

    int result = isTriangle(a, b, c);

    if (result == 0) {
        std::cout << "wrong" << std:: endl;
    } else if (result == 1) {
        std::cout << "right" << std:: endl;
    } else {
        std::cout << "error" << std:: endl;
    }
  }

  return 0; 
}
