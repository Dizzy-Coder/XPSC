#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if (s[0]=='a' || s[1]=='b' || s[2]=='c') cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}