#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int chal;
	cin>>chal;
	while(chal--){
	    long long int n ;
	    cin>>n;
	    if(n&1==1){
	        cout<<"-1\n";
	    }else {
	        cout<<"0 0 "<<n/2<<"\n";
	    }
	}
	return 0;
}
