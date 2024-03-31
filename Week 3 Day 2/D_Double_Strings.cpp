#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        vector<string>v;
        map<string, int>mp , an;
        for (int i=0; i<n; i++){
            string s;
            cin>>s;
            v.push_back(s);
            mp[s]++;
        }
        string ans = "";
        for (int i=0; i<n; i++){
            for (int j=0; j<v[i].size(); j++){
                string f= v[i].substr(0,j), l= v[i].substr(j, v[i].size()-j);
                if (mp[f] && mp[l]) an[v[i]]=-1;
            }
            if (an.count(v[i])==0) an[v[i]]=0;
        }
        for (string s: v){
            if (an[s]==-1) ans+='1';
            else ans+='0';
        }
        cout<<ans<<endl;
    }
    return 0;
}