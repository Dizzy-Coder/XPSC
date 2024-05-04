#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a, ans;
        cin>>a;
        vector<int>v;
        for (int i=0; i<a; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        ans= abs(v[0]-v[1]);
        for (int i=1; i<a-1; i++){
            ans = min(ans,max(abs(v[i]-v[i+1]),abs(v[i]-v[i-1])));
        }
        ans = min(ans, abs(v[a-1]-v[a-2]));
        cout<<ans<<endl;
    }
    return 0;
}