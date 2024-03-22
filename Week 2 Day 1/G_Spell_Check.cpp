#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a; string s;
        cin>>a>>s;
        vector<int>v(5,1),ch(5,0);
        if (a==5){
            for (char c:s){
                if (c=='T') ch[0]++;
                else if (c=='i') ch[1]++;
                else if (c=='m') ch[2]++;
                else if (c=='u') ch[3]++;
                else if (c=='r') ch[4]++;
            }
            if (v==ch) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}