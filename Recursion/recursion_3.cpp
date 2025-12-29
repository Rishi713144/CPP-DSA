//  paramatical approach
#include <iostream>
using namespace std;

void sumParam(int n, int sum) {
    if (n == 0) {
        cout << "Sum = " << sum << endl;
        return;
    }
    sumParam(n - 1, sum + n);
}

int main() {
    int n = 5;
    sumParam(n, 0);
    return 0;
}

//functional approach
#include <iostream>
using namespace std;

int sumFunc(int n) {
    if (n == 0)
        return 0;
    return n + sumFunc(n - 1);
}

int main() {
    int n = 5;
    cout << "Sum = " << sumFunc(n) << endl;
    return 0;
}
