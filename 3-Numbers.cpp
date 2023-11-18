#include <iostream>
using namespace std;

int main() {
    int N, number;
    int even = 0, odd = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> number;
        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Odds: " << odd;
    cout << "Evens: " << even;
    return 0;
}
