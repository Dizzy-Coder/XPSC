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
        ll ar, mx=0, ans=0, k=0;
        for (int i=0; i<a; i++){
            cin>>ar;
            if (ar>mx){
                mx=ar;
            }
            else if (mx>ar){
                ans+=mx-ar;
                k = max(k, mx-ar);
            }
        }
        cout<<ans+k<<endl;
    }
    return 0;
}