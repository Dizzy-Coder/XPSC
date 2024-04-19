#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        if (b>c){
            if (a<b) cout<<1<<endl;
            else if (a>b) cout<<2<<endl;
            else cout<<3<<endl;
        }
        else{
            if ((a-1)<(c-b)+(c-1)) cout<<1<<endl;
            else if ((a-1)>(c-b)+(c-1)) cout<<2<<endl;
            else cout<<3<<endl;
        }
    }
    return 0;
}