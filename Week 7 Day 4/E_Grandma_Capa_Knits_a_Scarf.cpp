#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a; string s;
        cin>>a>>s;
        int ans = a+1;
        for (int k=0; k<26; k++){
            int i=0, j=a-1, cnt=0;
            while(i<=j){
                if (s[i]==s[j]){
                    i++; j--;
                }
                else if (s[i]=='a'+k){
                    i++; cnt++;
                }
                else if (s[j]=='a'+k){
                    j--; cnt++;
                }
                else{
                    cnt= a+1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans==a+1) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}