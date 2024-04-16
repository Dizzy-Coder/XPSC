#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        ll a,x, ans=0, c=0, f=0;
        cin>>a;
        for (ll i=0; i<a; i++){
            cin>>x;
            ans+=abs(x);
            if (x<0 && f==0){
                c++;
                f=1;
            }
            else if (x>0){
                f=0;
            }
        }
        cout<<ans<<" "<<c<<endl;
        
    }
    return 0;
}