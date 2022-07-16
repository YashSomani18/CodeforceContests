#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int n ,int k, int arr[] , int a , int b){
    
    
    // auto it1 = hash.lower_bound(a);
    // auto it2 = hash.upper_bound(b);
    // cout<<a<<" "<<b<<endl;
    // if(it1== hash.end() || it2==hash.end()){
    //     cout<<"NO\n";
    //     return;
    // }
    // cout<<(*it1).second<<" "<<(*it2).second<<endl;
    
    // if((*it1).second < (*it2).second){
    //     cout<<"YES\n";
    // }else{
    //     cout<<"NO\n";
    // }
    int j=-1 ;
    for(int i =0;i<n;i++){
        if(arr[i]==a){
           j==i; 
        }    
    }
    bool flag=false;
    for(int k =j;k<n;k++){
        if(arr[k]==b){
            flag =true;
            cout<<"YES"<<endl;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }
}



int main() {
	// your code goes here
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int chal;
    cin>>chal;
    while(chal--){
        int n ,k;
        cin>>n>>k;
        multimap<int,int> hash;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
            hash.insert(pair<int, int>(arr[i], i));
            
        }
        
        // vector<pair<int,int>> vp(k);
        for(int i =0;i<k;i++){
            int a, b;
            cin>>a>>b;
            // vp[i]={a,b};
            solve(n,k,arr,a,b);
        }
        
        
        
        
    }
    
	return 0;
}
//   
//    
