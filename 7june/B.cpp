#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool possible(int A[] , int B[],int n){
    for(int i =0;i<n;i++){
        if(B[i]>A[i]){
            return false;
        }
    }
    return true;
    
}

bool helper(int B[],int diff [], int n , int maxi){
    for(int i =0;i<n;i++){
        if(diff[i] != maxi){
            if(B[i] != 0 )return false;
        }
    }
    return true;
}
int main() {
    int test;
    cin>>test;
    while(test--){
        int n ;
        cin>>n;
        
        int A[n];
        int B[n];
        for(int i=0;i<n;i++ ){
            cin>>A[i];
        }
        
        for(int i=0;i<n;i++ ){
            cin>>B[i];
        }
        
        if(!possible(A,B,n)){
            cout<<"NO"<<endl;
        }else{
            int diff[n];
            int maxi=0;
            for(int i =0;i<n;i++){
                diff[i]=A[i]-B[i];
                maxi=max(maxi,diff[i]);
            }
            
            if(helper(B,diff,n,maxi)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            
            
        }
        
    }
    return 0;
}