#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int ar[a], ans[a];
        for (int i=0; i<a; i++){
            cin>>ar[i];
        }
        for (int i=0; i<a; i++){
            int b,t=ar[i]; string s;
            cin>>b>>s;
            for (char c:s){
                if (c=='D'){
                    t++;
                    if (t>9) t=0;
                }
                else{
                    t--;
                    if (t<0) t=9;
                }
            }
            ans[i] = t;
        }
        for (int i=0; i<a; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}