#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b,x, t=0, ans=0;
        cin>>a>>b;
        vector<int>v;
        for (int i=0; i<a; i++){
            cin>>x;
            v.push_back(x);
            ans = max(ans, x-t);
            t=x;
        }
        
        cout<<max(ans, (b-x)*2)<<endl;
    }
    return 0;
}