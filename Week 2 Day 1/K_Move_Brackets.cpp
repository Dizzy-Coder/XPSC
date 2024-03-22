#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int flag=0;
        int a; string s;
        cin>>a>>s;
        stack<char>st;
        for (char c:s){
            if (st.empty()) st.push(c);
            else{
                if ( st.top()=='(' && c==')') st.pop();
                else st.push(c);
            }
        }
        int sz= st.size();
        cout<<st.size()/2<<endl;
    }
    return 0;
}