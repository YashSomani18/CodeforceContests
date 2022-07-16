#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int chal;
	cin>>chal;
	while(chal--){
	    string s;
	    cin>>s;
	    
	    if((s[0]=='y' || s[0]=='Y') && (s[1]=='e' || s[1]=='E') && (s[2]=='s' || s[2]=='S')){
	        cout<<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
