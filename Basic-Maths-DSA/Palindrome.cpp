#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n , reverse_digit=0;
    
    cout<<"Enter the digit to check its palindrome or not: ";
    cin>>n;
    
    int dup= n;
    
    while(n>0){
        
        reverse_digit = reverse_digit*10 + n%10;
        n/=10;
        
    }
    
    if(reverse_digit == dup) cout<<true;
    else cout<<false;
    
}