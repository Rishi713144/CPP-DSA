#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    // 1. Vector: A dynamic array
    cout << "=== Vector Example ===" << endl;
    vector<int> numbers = {1, 2, 3};
    numbers.push_back(4); // Add 4 to the end
    cout << "Numbers in vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 2. List: A doubly-linked list
    cout << "\n=== List Example ===" << endl;
    list<string> fruits = {"apple", "banana"};
    fruits.push_back("orange"); // Add to the end
    cout << "Fruits in list: ";
    for (const string& fruit : fruits) {
        cout << fruit << " ";
    }
    cout << endl;

    // 3. Set: Stores unique, sorted values
    cout << "\n=== Set Example ===" << endl;
    set<int> unique_nums = {3, 1, 2, 1}; // Duplicate 1 ignored
    cout << "Unique numbers: ";
    for (int num : unique_nums) {
        cout << num << " ";
    }
    cout << endl;

    // 4. Map: Stores key-value pairs
    cout << "\n=== Map Example ===" << endl;
    map<string, int> ages;
    ages["Alice"] = 20;
    ages["Bob"] = 25;
    cout << "Ages: ";
    for (const auto& pair : ages) {
        cout << pair.first << ": " << pair.second << " ";
    }
    cout << endl;

    // 5. Stack: Last-In, First-Out (LIFO)
    cout << "\n=== Stack Example ===" << endl;
    stack<char> letters;
    letters.push('A');
    letters.push('B');
    cout << "Top of stack: " << letters.top() << endl;
    letters.pop(); // Remove top element
    cout << "After pop, top: " << letters.top() << endl;

    // 6. Queue: First-In, First-Out (FIFO)
    cout << "\n=== Queue Example ===" << endl;
    queue<int> line;
    line.push(10);
    line.push(20);
    cout << "Front of queue: " << line.front() << endl;
    line.pop(); // Remove front element
    cout << "After pop, front: " << line.front() << endl;

    // 7. Algorithm: Sorting a vector
    cout << "\n=== Sorting Example ===" << endl;
    vector<int> sort_nums = {4, 2, 5, 1};
    sort(sort_nums.begin(), sort_nums.end());
    cout << "Sorted numbers: ";
    for (int num : sort_nums) {
        cout << num << " ";
    }
    cout << endl;

    // 8. Algorithm: Finding a value
    cout << "\n=== Finding Example ===" << endl;
    auto it = find(sort_nums.begin(), sort_nums.end(), 2);
    if (it != sort_nums.end()) {
        cout << "Found 2 in vector!" << endl;
    } else {
        cout << "2 not found in vector." << endl;
    }

    return 0;
}