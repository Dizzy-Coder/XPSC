#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a, o=0, z=0; string s;
        cin>>a>>s;
        for (char c: s){
            if (c=='1') o++;
            else z++;
        }
        int c=min(o,z);
        if (c%2==0) cout<<"Ramos\n";
        else cout<<"Zlatan\n";
    }
    return 0;
}