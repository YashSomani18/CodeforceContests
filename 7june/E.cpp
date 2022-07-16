#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int test;
    cin>>test;
    while(test--){
     int n,k;
     cin>>n>>k;
     int weights[n];
     
     for(int i =0;i<n;i++){
         cin>>weights[i];
     }
     
     priority_queue<int> pq;
     
     for(int i =0;i<n;i++){
         pq.push(weights[i]);
     }
     
     if(pq.top()<k){
         int ans =0;
     while(!pq.empty()){
         int one =pq.top();
         pq.pop();
         int two =pq.top();
         pq.pop();
         
         int sum = one+two;
         sum = sum/k;
         
         ans += sum;
         
     }
     cout<<ans<<endl;
     }else{
         int ans =0; 
    for(int i =0;i<n;i++){
        ans += weights[i];
    }
    ans /= k;
    cout<<ans<<endl;
     }
    
     
     
     
    }
    return 0;
}