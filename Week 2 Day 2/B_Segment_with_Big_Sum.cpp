#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a; ll b,x,ts=0;
    cin>>a>>b;
    vector<ll>v;
    for (int i=0; i<a; i++){
        cin>>x;
        v.push_back(x);
    }
    int l=0, r=0, w=INT_MAX;
    while(l<a && r<a){
        ts+=v[r];
        while(ts-v[l]>=b){
            ts-=v[l];
            l++;
        }
        r++;
        if (ts>=b){
            w=min(w,r-l);
        }
        
    }
    if (w==INT_MAX) cout<<-1;
    else cout<<w;
    return 0;
}