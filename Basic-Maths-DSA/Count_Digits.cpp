#include<bits/stdc++.h>
using namespace std;

int main(){

    

    int n, count=0;

    cout<<"Enter Number :";
    cin>>n;

    
    while(n>0){

        count++;

        n/=10;  
    }

    cout<<endl<<"The number of digits inside the number is : "<<count;

}



