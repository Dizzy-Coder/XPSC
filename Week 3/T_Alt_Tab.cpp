#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a;
    cin>>a;
    vector<string> v;
    map<string, int>mp;
    for (int i=0; i<a; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    string ans="";
    for (int j=a-1; j>=0; j--){
        string i=v[j];
        if (mp.count(i)==0){
            int sz = i.size();
            ans+=i[sz-2];
            ans+=i[sz-1];
            mp[i]++;
        }
    }
    cout<<ans<<endl;
    return 0;
}