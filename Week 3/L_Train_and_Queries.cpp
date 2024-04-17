#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        cin.ignore();
        int a,b;
        cin>>a>>b;
        map<ll, pair<int,int> >mp;
        for (int i=0; i<a; i++){
            ll x;
            cin>>x;
            if (mp.count(x)==0){
                mp[x]={i,i};
            }
            else{
                mp[x].second = i;
            }
        }
        for (int i=0; i<b; i++){
            ll p,q;
            cin>>p>>q;
            if (mp.count(p)!=0 && mp.count(q)!=0){
                if (mp[p].first <= mp[q].second) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}