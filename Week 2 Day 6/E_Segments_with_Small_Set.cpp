#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ch[100005] = {0}, ar[a];

    for (int i=0; i<a; i++){
        cin>>ar[i];
    }
    int j=0, c=0; long long ans=0;
    for (int i=0; i<a; i++){
        ch[ar[i]]++;
        if (ch[ar[i]]==1) c++;
        while(c>b){
            ch[ar[j]]--;
            if (ch[ar[j]]==0) c--;
            j++;
        }
        ans+=i-j+1;
    }
    cout<<ans;
    return 0;
}