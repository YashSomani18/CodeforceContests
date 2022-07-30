#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	    int n;
	    cin>>n;
	    vector<int> p(n);
	    
	    for(int i =0;i<n;i++) cin>>p[i];
	   
        sort(p.begin(),p.end());
        
        int s=0,w=0;
	    for(int i =0;i<n;i++){
	        if(w<=p[i]){
	            w+=p[i];
	            s++;
	        }
	    }
	    cout<<s<<"\n";

	
	return 0;
}
