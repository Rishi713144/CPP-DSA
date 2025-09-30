#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    
    int n, count=0;
    
    cout<<" Enter the number you want to check whether its Prime or not:";
    cin>>n;
    
    
    
    for(int i=1 ; i<=n ; i++){
        
        if(n%i==0) count++; 
        
    }
    
    if(count!=2) cout<<"Not Prime !! ";
    else cout<<" Prime Number!! ";
    
   
    
   