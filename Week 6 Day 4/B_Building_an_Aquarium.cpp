#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a; ll b;
        cin>>a>>b;
        vector<ll>v;
        for (int i=0; i<a; i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll l=0, r = 1e10;
        while(l<r-1){
            ll w = 0;
            ll mid = l+(r-l)/2;
            for (ll i:v){
                if (i<mid){
                    w+= (mid-i);
                }
            }
            if (w>b){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}