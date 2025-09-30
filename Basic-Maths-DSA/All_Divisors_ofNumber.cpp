#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number for which you wants the factor of it: ";
    cin >> n;

    
    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
            cout << i << " ";
    }

    cout << endl
         << "Below is result with 2nd Approach: " << endl;

    
    vector<int> v;

    for (int i = 1; i * i <= n; i++)
    { 

        if (n % i == 0)
        {

            v.emplace_back(i); 

            if (i != n / i)
            { 

                v.emplace_back(n / i);
            }
        }
    }

    
    sort(v.begin(), v.end()); 
    for (auto i : v)
    { 
        cout << i << " ";
    }

    

    cout << endl
         << "Lets see now by taking set: ";

    set<int> st;

    for (int i = 1; i * i <= n; i++) 
    {

        if (n % i == 0)
        {

            st.insert(i);

            if (i != n / i)
            {

                st.insert(n / i);
            }
        }
    }

    for (auto i : st)  
    {

        cout << i << " ";

    }

}