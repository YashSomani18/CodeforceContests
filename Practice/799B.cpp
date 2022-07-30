#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	    int n;
	    cin>>n;
	    vector<int> p(n),a(n),b(n);
	    
	    for(int i =0;i<n;i++) cin>>p[i];
	    for(int i =0;i<n;i++) cin>>a[i];
	    for(int i =0;i<n;i++) cin>>b[i];
	    
	    set<int> s[4];
	    for(int i =0;i<n;i++){
	        s[a[i]].insert(p[i]);
	        s[b[i]].insert(p[i]);
	    }
	    int m ;
	    cin>>m;
	    for(int i=0;i<m;i++){
	        int price =0,col;
	        cin>>col;
	        price = *s[col].begin();
	        
	        for(int j =1;j<=3;j++) s[j].erase(price);
	        if(price)cout<<price<<" ";
	        else cout<<"-1 ";
	        
	    }

	
	return 0;
}
