#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        int p=0,q=0;
        for (char c:a){
            if (c=='X'){
                p++;
            }
            else if (c=='L'){
                p++;
            }
            else if (c=='S'){
                p*=-1;
                p--;
            }
        }
        for (char c:b){
            if (c=='X'){
                q++;
            }
            else if (c=='L'){
                q++;
            }
            else if (c=='S'){
                q*=-1;
                q--;
            }
        }
        if (p>q) cout<<'>'<<endl;
        else if (p<q) cout<<'<'<<endl;
        else cout<<'='<<endl;
    }
    return 0;
}