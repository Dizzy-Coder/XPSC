#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        map<ll, int>m;
        int mn=0;
        for (int i=0; i<a; i++){
            ll x;
            cin>>x;
            m[x]++;
            if (m[x]>mn) mn = m[x];
        }
        if (mn==a) cout<<0<<endl;
        else{
            int op=1, i=mn, r=a-mn;
            while(r>0){
                if (i>=r){
                    op+=r;
                    r-=i;
                }
                else{
                    r-=i;
                    op+=i;
                    if (r>0){
                        i*=2;
                        op++;
                    }
                }
            }
            cout<<op<<endl;
        }

    }
    return 0;
}