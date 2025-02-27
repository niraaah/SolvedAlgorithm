#include <iostream>

int isPrime(int num){
  if(num <= 1){
      return 0;
  }

  for (int i = 2; i*i <= num; i++){
    if(num % i == 0){
        return 0;
    }
  }

  return 1;
}

int main() {
    int total = 0, input = 0, cnt = 0;
    std::cin >> total;

    for (int i = 0; i < total; i++){
        std::cin >> input;
        if(isPrime(input) == 1){
            cnt++;
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}
