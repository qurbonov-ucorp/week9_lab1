#include <iostream>
using namespace std;

double series(int n) {
    if (n == 1) return 1;
    return 1.0 / (n * n) + series(n - 1);
}

int main() {
    int num;
    cin >> num;
    cout << series(num) << endl;
    return 0;
}