#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    int sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) return false;
    }
    
    return true;
}

int main() {
    int M, N;
    cin >> M >> N;
    
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    
    return 0;
}