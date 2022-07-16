#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        long long int given;
        cin>>given;
        
        long long int arr [3]={2,3,1};
        
        given -=6;
        long long int range = given/3;
        for(long long int j=0;j<range;j++){
        for(int i =0;i<3;i++){
            arr[i] += 1;
            }
        }        
        //take care case
        
        if(given%3==1){
            arr[1]+=1; 
        }else {
            for(long long int i=0;i<given%3;i++){
                arr[i]+=1;
            }
        }
        
        for(long long int i =0;i<3;i++){
            cout<<arr[i]<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}