#include <bits/stdc++.h>
using namespace std;

int main() {

    /* =====================================================
       1️⃣ BASIC HASHING USING ARRAY (Frequency Array)
       Works when values are small & non-negative
    ===================================================== */

    int arr1[] = {1, 3, 2, 1, 3};
    int n1 = 5;

    int hashArr[6] = {0};  // range: 0 to 5

    for (int i = 0; i < n1; i++) {
        hashArr[arr1[i]]++;
    }

    cout << "Frequency using Array Hashing:\n";
    for (int i = 0; i <= 5; i++) {
        if (hashArr[i] > 0)
            cout << i << " -> " << hashArr[i] << endl;
    }

    cout << "\n";

    /* =====================================================
       2️⃣ HASHING USING UNORDERED_MAP (Most Common in DSA)
       Works for large & negative values
    ===================================================== */

    int arr2[] = {5, -1, 5, 2, -1, 5};
    int n2 = 6;

    unordered_map<int, int> umap;

    for (int i = 0; i < n2; i++) {
        umap[arr2[i]]++;
    }

    cout << "Frequency using unordered_map:\n";
    for (auto it : umap) {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\n";

    /* =====================================================
       3️⃣ HASHING USING MAP (Sorted Output)
    ===================================================== */

    map<int, int> smap;

    for (int i = 0; i < n2; i++) {
        smap[arr2[i]]++;
    }

    cout << "Frequency using map (sorted):\n";
    for (auto it : smap) {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "\n";

    /* =====================================================
       4️⃣ CHARACTER HASHING (Lowercase Letters)
    ===================================================== */

    string s = "abcdab";

    int charHash[26] = {0};

    for (char c : s) {
        charHash[c - 'a']++;
    }

    cout << "Character Frequency:\n";
    for (int i = 0; i < 26; i++) {
        if (charHash[i] > 0)
            cout << char(i + 'a') << " -> " << charHash[i] << endl;
    }

    return 0;
}
