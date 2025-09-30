#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int n1,n2 , gcd=1; 
    
    cout<<"Enter both the numbers : ";
    cin>>n1>>n2;
    
    for(int i=1 ; i<=min(n1,n2) ; i++){
        
        if(n1%i==0 && n2%i==0){
            
            gcd=i;
            
        }
        
    }
    
    cout<<"GCD of both the numbers is : "<<gcd;

    
    
    
    
    
    
    
}