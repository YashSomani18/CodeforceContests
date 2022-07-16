#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int chal;
	cin>>chal;
	while(chal--){
	    char chess[8][8];
	    for(int i=0;i<8;i++){
	        for(int j =0;j<8;j++){
	            cin>>chess[i][j];
	        }
	    }
	   
	    
	    for(int i =1;i<7;i++){
	        for(int j=1;j<7;j++){
	            if(chess[i][j]=='#'){
	          
	   
                if(chess[i+1][j+1]=='#' && chess[i+1][j-1]=='#' ){
            // a=i+1;
            // b=j+1;
            cout<<i+1<<" "<<j+1<<endl;
            break;
            
        }
    
	            }
	        }
	    }
	   
	   
	}
	return 0;
}
