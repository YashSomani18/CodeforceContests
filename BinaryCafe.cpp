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

    int T;
    cin >> T;
    while (T--){
       ll n , k;
       cin>>n>>k;

        k = min(k,30);

        cout<<min(n,(1<<k)-1)+1<<endl;
    }
    return 0;
}