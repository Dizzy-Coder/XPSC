#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        ll c,o,h,a;
        cin>>c>>o>>h;
        vector<ll>oc, cc;
        for (int i=0; i<c; i++){
            cin>>a;
            cc.push_back(a);
        }
        for (int i=0; i<o; i++){
            cin>>a;
            oc.push_back(a);
        }
        sort(oc.begin(), oc.end(), greater<int>() );
        sort(cc.begin(), cc.end(), greater<int>() );
        ll ans=0;
        for (int i=0; i<min(c,o); i++){
            ll res = (min(oc[i],cc[i])*h);
            if (res>cc[i]) ans+=cc[i];
            else ans+=res;
        }
        cout<<ans<<endl;
    }
    return 0;
}