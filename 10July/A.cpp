#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int chal;
    cin>>chal;
    while(chal--){
        long long int m;
        cin>>m;
        long long int temp=m;
        int count=0;
        while(temp>0){
            count++;
            temp /=10;
        }
        int ans =1;
        for(int i =0;i<count-1;i++){
            ans = ans *10;
        }
        
        int help = m-ans;
        cout<<help<<"\n";
        
        
    }
    
	return 0;
}
