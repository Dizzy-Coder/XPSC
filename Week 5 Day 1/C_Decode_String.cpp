#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a; string s, ans="";
        cin>>a>>s;
        for (int i=a-1; i>=0; i--){
            if (s[i]=='0'){
                int d = (s[i-2]-'0')*10 + (s[i-1]-'0');
                ans+=('a'+d-1);
                i-=2;
            }
            else{
                int d = s[i]-'0';
                ans+=('a'+d-1);
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
    return 0;
}