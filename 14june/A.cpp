#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	 int chal;
	 cin>>chal;
      while(chal--){
            int arr[4];
           
            for(int i =0;i<4;i++){
                  cin>>arr[i];
            }
            int cont=0;
            for(int i =1;i<4;i++){
                  if(arr[i]>arr[0]){
                        cont++;
                  }
            }
            
            cout<<cont<<endl;
      }
	return 0;
}
