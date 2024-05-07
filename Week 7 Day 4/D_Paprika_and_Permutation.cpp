#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,f=0;
        cin>>a;
        vector<ll>q,st;
        for (int i=0; i<a; i++){
            ll x;
            cin>>x;
            if (x>a){
                q.push_back(x);
            }
            else st.push_back(x);
        }
        sort(q.begin(), q.end(), greater<ll>() );
        sort(st.begin(), st.end());
        ll j=1,ans = q.size();
        for (int i=1; i<=a; i++){
            cout<<st[i-1]<<" m\n";
            if (j!=st[i-1]){
                if (j>=*(q.end()-1)/2){
                    f=1;
                    break;
                }
                else{
                    q.pop_back();
                }
            }
            j++;
        }
        if (f==1) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}