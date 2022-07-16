#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int test;
    cin>>test;
    while(test--){
      long long int n;
      cin>>n;
      
      long long int S[n];
      long long int F[n];
      
      for(long long int i =0;i<n;i++){
          cin>>S[i];
      }
      
      for(long long int i =0;i<n;i++){
          cin>>F[i];
      }
      
      long long int D[n];
      D[0]=F[0]-S[0];
      
      for(long long int i =1;i<n;i++){
          D[i]= F[i] - max(S[i],F[i-1]);
      }
      
      
      for(long long int i =0;i<n;i++){
          cout<<D[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}