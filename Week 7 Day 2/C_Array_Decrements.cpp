#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int x;
    cin>>x;
    while(x--){
        int n, f=0;
        cin>>n;
        vector<ll>a,b, ans;
        for (int i=0; i<n; i++){
            ll p;
            cin>>p;
            a.push_back(p);
        }
        for (int i=0; i<n; i++){
            ll p;
            cin>>p;
            b.push_back(p);
            if (p>a[i]) f=1;
            ans.push_back(a[i]-p);
        }
        if (f==1) cout<<"NO\n";
        else{
            ll mx = *max_element(ans.begin(), ans.end());
            for (int i=0; i<n; i++){
                if (ans[i]!=mx && b[i]!=0){
                    f=1;
                    break;
                }
            }
            if (f==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
        
    }
    return 0;
}