#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int ar[26]={0};
        int a,b, odd=0; string s;
        cin>>a>>b>>s;
        for (char c:s) ar[c-'a']++;
        for (int i=0; i<26; i++){
            if (ar[i]%2==1) odd++;
        }
        if (abs(b-odd)==1 || b==odd)cout<<"YES\n";
        else if (b>odd) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}