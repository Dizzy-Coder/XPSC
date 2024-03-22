#include <bits/stdc++.h>
using namespace std;

int dif(string s1, string s2, int b){
    int d=0;
    for (int i=0; i<b; i++){
        d+=abs(s1[i]-s2[i]);
    }
    return d;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        vector<string>v;
        for (int i=0; i<a; i++){
            string x;
            cin>>x;
            v.push_back(x);
        }
        int ch = INT_MAX;
        for (int i=0; i<a-1; i++){
            for (int j=i+1; j<a; j++){
                int d = dif(v[i],v[j],b);
                ch = min(ch, d);
            }
        }
        cout<<ch<<endl;
    }
    return 0;
}