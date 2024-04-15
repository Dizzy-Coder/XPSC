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
        set<int>s;
        vector<int>v;
        int x,ans,id=a;
        for (int i=0; i<a; i++){
            cin>>x;
            v.push_back(x);
        }
        for (int i=a-1; i>=0; i--){
            if (s.count(v[i])!=0){
                break;
            }
            s.insert(v[i]);
            id--;
        }
        cout<<id<<endl;
    }
    return 0;
}