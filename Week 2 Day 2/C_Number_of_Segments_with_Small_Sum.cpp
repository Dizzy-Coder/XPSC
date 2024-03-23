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
    int l=0, r=0;ll w=0;
    while(l<a && r<a){
        ts+=v[r];
        while(ts>b){
            ts-=v[l];
            l++;
        }
        r++;
        w+=r-l;
    }
    cout<<w;
    return 0;
}