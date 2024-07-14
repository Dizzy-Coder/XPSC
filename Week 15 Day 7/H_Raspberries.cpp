#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b, cnt=0;
        cin>>a>>b;
        int ans=b-1;
        for (int i=0; i<a; i++){
            int x;
            cin>>x;
            ans = min(ans, (b-(x%b))%b);
            if (x%2==0) cnt++;
        }
        if (b==4) ans = min(ans, 2-min(cnt,2));
        cout<<ans<<endl;
    }
    return 0;
}