#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	 int chal;
	 cin>>chal;
      while(chal--){
           int size;
           cin>>size;
           
           int arr[size];
           for(int i =0;i<size;i++){
               cin>>arr[i];
           }
           
           sort(arr,arr+size);
           int i=0,j=size-1;
           int count=0;
           while(i<j){
               if(arr[i]==arr[i+1]){
                   count+=2;
               }else if(arr[j]==arr[j-1]){
                   count+=2;
               }
               i++;
               j--;
               
           }
           int answer = size-count;
           cout<<answer<<endl;
      }
	return 0;
}
