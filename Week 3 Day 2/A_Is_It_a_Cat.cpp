#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--){
        int n; string s;
        cin>>n>>s;
        stack<char>st, ch;
        char m[4] = {'m', 'e', 'o', 'w'};
        for (int i=0; i<4; i++){
            ch.push(m[i]);
        }
        for (char c:s){
            c= tolower(c);
            if (st.empty()) st.push(c);
            else{
                if (st.top()!=c) st.push(c);
            }
        }
        if (st==ch) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}