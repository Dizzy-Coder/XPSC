#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        map<int, int> m;
        for (int i=0; i<a; i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int t=0, s=0;
        for (auto it=m.begin(); it!=m.end(); it++){
            if (it->second>1) t+=(it->second-1);
            s++;
        }
        if (t%2==0) cout<<s<<endl;
        else cout<<s-1<<endl;
    }
    return 0;
}