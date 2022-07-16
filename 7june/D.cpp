#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int test;
    cin>>test;
    while(test--){
     int n,k;
     cin>>n>>k;
     
     string s;
     cin>>s;
     int ans=0;
     int totalBlack=0;
     int consBlack=0;
     int help=0;
     for(int i =0;i<n;i++){
         if(s[i]=='B'){
             totalBlack++;
             help++;
         }else{
             consBlack=max(consBlack,help);
             help=0;
         }
     }
     
     if(n==k){
         ans = n- totalBlack;
     }else if(consBlack>=k){
         ans=0;
     }else{
         ans = k- consBlack;
     }
     
     
     cout<<ans<<endl;
     
     
    }
    return 0;
}