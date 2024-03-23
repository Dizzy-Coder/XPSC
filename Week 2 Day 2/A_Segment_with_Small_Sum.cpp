#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a; ll b,x, ts=0;
    vector<ll>v;
    cin>>a>>b;
    for (int i=0; i<a; i++){
        cin>>x;
        v.push_back(x);
    }
    int l=0, r=0, w=0;
    while(l<a && r<a){
        ts+=v[r];
        r++;
        while(ts>b){
            ts-=v[l];
            l++;
        }
        if (r-l>w) w=r-l;
    }
    cout<<w;
    return 0;
}