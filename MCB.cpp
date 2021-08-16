#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int MCB(int a[],int size){
    
    sort(a,a+size);
    int sum=0;
    int carryforword=1;
    
    for(int i=0;i<size-1;i++){
       sum=sum+a[i];
       
    }
    if(sum<3000){
        cout<<"Your MCB is less than 3000\n";
        return 0;
    }
    
    cout<<"\nTotal MCB = "<<sum<<"\n";
    
    if(sum%3==0){
        return sum*0.12;
    }
    else{
       
        while(true){
            if((sum-carryforword)%3==0 &&(sum-carryforword)%1000==0){
                cout<<"Your Carry Forwaord point = "<< carryforword;
                 return (sum-carryforword)*0.12;
            }
                
            carryforword++;
            
        }
        
    }
    
}
int main()
{
    // int a[3]={1935,1964,1592};
    int a[2]={5491,1749};
    cout<<"\nYour Cheque = "<<MCB(a,3)-MCB(a,3)*0.05;
}
