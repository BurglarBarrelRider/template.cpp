#include <iostream>
using namespace std;

bool isLuckyTicket(int number) {
    if (number < 100000) {
        return false;
    }

    int digit1 = number / 100000;  // Extracting the first digit
    int digit2 = (number / 10000) % 10;  
    int digit3 = (number / 1000) % 10;   
    int digit4 = (number / 100) % 10;    
    int digit5 = (number / 10) % 10;     
    int digit6 = number % 10;          

    return (digit1 + digit2 + digit3 == digit4 + digit5 + digit6);
}

int main() {
    int ticketNumber;
    cin >> ticketNumber;

    if (isLuckyTicket(ticketNumber)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
