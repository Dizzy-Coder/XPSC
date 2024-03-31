#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int x;
    cin>>x;
    while(x--){
        ll a,b,n;
        cin>>n>>b;
        vector<ll>v,ps;
        for (int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }
        ll sum=0;
        for (int i=0; i<n; i++){
            sum+=v[i];
            ps.push_back(sum);
        }
        while(b--){
            ll l,r,k,mn;
            cin>>l>>r>>k;
            if (l==1) mn = ps[r-1];
            else mn = ps[r-1] - ps[l-2];
            ll s = sum-mn;
            s+=((r-l+1)*k);
            if (s%2==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}