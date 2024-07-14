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
        int i=0, j=a-1;
        while(i<a && s[i]!='A') i++;
        while(j>0 && s[j]!='B') j--;
        if (j>i) cout<<j-i<<endl;
        else cout<<0<<endl;
    }
    return 0;
}