#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        ll a;
        cin>>a;
        ll ar[a+1]={0};
        map<ll,ll>mp;
        for (int i=0; i<a; i++){
            ll x;
            cin>>x;
            mp[x]++;
        }
        for (auto it=mp.begin(); it!=mp.end(); it++){
            ll p,x,q;
            p = it->first; x= p; q = it->second;
            while(p<=a){
                ar[p]+=q;
                p+=x;
            }
        }
        ll ans = *max_element(ar, ar+a+1);
        cout<<ans<<endl;
    }
    return 0;
}