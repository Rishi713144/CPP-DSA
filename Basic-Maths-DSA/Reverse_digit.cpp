#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n , reverse_digit=0;
    
    cout<<"Enter the digit to check the reverse of it: ";
    cin>>n;
    
    while(n>0){
        
        reverse_digit = reverse_digit*10 + n%10;
        n/=10;
        
    }
    
    cout<<"The reverse of the given number is : "<<reverse_digit;
    
}