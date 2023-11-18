#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true; // Если число не делится нацело ни на одно число от 2 до его квадратного корня, оно простое, и функция возвращает true.
}

int main() {
    int N;
    cin >> N;
    for (int i = N + 1;; i++) { // infinite loop
        if (isPrime(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
