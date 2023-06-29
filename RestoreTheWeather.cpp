#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    
    
    
    
    ll t;
    cin>>t;
    while(t--) {
        ll n,k,b;
        cin>>n>>k;
        vector < pair < ll, ll > >fir;
        vector < ll > sec,res(n);
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
            fir.push_back(make_pair(b,i));
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
            sec.push_back(b);
        }
        sort(fir.begin(),fir.end());
        sort(sec.begin(),sec.end());
        for(ll i = 0 ; i < n ; i++) {
            res[fir[i].second] = sec[i];
        }
        for(ll i = 0 ; i < n ; i++) {
            cout<<res[i]<<" ";   
        }
        cout<<endl;
    }
    
    return 0;
}

