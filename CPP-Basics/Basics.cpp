#include <iostream>
#include <string>
using namespace std;

// Function to calculate square (used in example 7)
int square(int num) {
    return num * num;
}

int main() {
    // 1. Hello World Program
    cout << "1. Hello World Program" << endl;
    cout << "Hello, World!" << endl;
    cout << "------------------------" << endl;

    // 2. Input and Output
    cout << "2. Input and Output" << endl;
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // Reads a line of text, including spaces
    cout << "Hello, " << name << "!" << endl;
    cout << "------------------------" << endl;

    // 3. Arithmetic Operations
    cout << "3. Arithmetic Operations" << endl;
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    

    // 4. If-Else Statement
    cout << "4. If-Else Statement" << endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << number << " is zero." << endl;
    }
    cout << "------------------------" << endl;

    // 5. For Loop
    cout << "5. For Loop" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "------------------------" << endl;

    // 6. While Loop
    cout << "6. While Loop" << endl;
    int sum = 0;
    cout << "Enter numbers (0 to stop): ";
    cin >> number;
    while (number != 0) {
        sum += number;
        cin >> number;
    }
    cout << "Sum: " << sum << endl;
    cout << "------------------------" << endl;

    // 7. Function Example
    cout << "7. Function Example" << endl;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Square of " << number << " is " << square(number) << endl;
    cout << "------------------------" << endl;

    // 8. Array Example
    cout << "8. Array Example" << endl;
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "------------------------" << endl;

   

   
}