#include <iostream>
using namespace std;

int factFunc(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factFunc(n - 1);
}

int main() {
    int n = 5;
    cout << "Factorial = " << factFunc(n) << endl;
    return 0;
}
