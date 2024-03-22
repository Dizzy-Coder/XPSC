#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a; char c;
        cin>>a;
        vector<char>v1,v2;
        for (int i=0; i<a; i++){
            cin>>c;
            if (c=='B') v1.push_back('G');
            else v1.push_back(c);
        }
        for (int i=0; i<a; i++){
            cin>>c;
            if (c=='B') v2.push_back('G');
            else v2.push_back(c);
        }
        if (v1==v2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}