#include <iostream>
using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;

    int totalTyiyn = (A * 100 + B) * N;

    int som = totalTyiyn / 100;
    int tyiyn = totalTyiyn % 100;

    cout << som << " som and " << tyiyn << " tyiyn";

    return 0;
}
// Open one of the C++ files in a text editor.
// Make some changes to the file (add comments, modify code, etc.).
