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
	    
	    
	    string s;
	    cin>>s;
	    
	    vector<char> all(26,'?');
	    int ans =0;
	    for(int i =0;i<n;i++){
	        char c= s[i];
	        int pos = c-'A';
	        if(all[pos]=='?'){
	            ans +=2;
	            
	        }else{
	            ans++;
	        }
	        
	        all[pos]=c;
	    }
	    
	    cout<<ans<<"\n";
	    
	    
	}
	return 0;
}
