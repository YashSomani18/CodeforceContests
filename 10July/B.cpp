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
        string str;
        cin>>str;
        int day=0;
        for(int i =0;i<str.size();){
            set<char> st;
            
            while(st.size()<3 && i<str.size()){
                st.insert(str[i]);
                // cout<<str[i]<<" ";
                i++;
            }
            
            // cout<<endl;
            
            
            while(st.find(str[i])!= st.end()){
                i++;
            }
            day++;
            st.clear();
        }
        cout<<day<<"\n";
    }
    
	return 0;
}
//   
//    
