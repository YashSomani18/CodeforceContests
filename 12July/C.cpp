#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int chal;
	cin>>chal;
	while(chal--){
	    int n ;
	    cin>>n;
	    
	    int arr[n];
	    
	    for(int i =0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    
	    for(int i =0;i<n;i++){
	        int toMove = arr[i];
	        
	        int len;
	        cin>>len;
	        string s;
	        cin>>s;
	        
	        for(int j =0;j<len;j++){
	            if(s[j]=='U'){
	                toMove--;
	                if(toMove<0){
	                    toMove+=10;
	                }
	                toMove %= 10;
	            }else if(s[j]=='D'){
	                toMove++;
	                toMove %= 10;
	            }
	        }
	        arr[i]=toMove;
	    }
	    
	    
	    for(int i =0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
