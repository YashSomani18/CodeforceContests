#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MP make_pair
#define pb push_back

#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7

int main(){
    
ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;

        string s ;
        cin>> s;

        
          int ans = 1, cur = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i - 1]) cur = 1;
            else cur++;
            ans = max(ans, cur);
        }
        cout << ans + 1 << endl;
    }

    
    return 0;

}