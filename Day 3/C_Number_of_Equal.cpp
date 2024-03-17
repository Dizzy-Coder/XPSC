#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int a1[a], a2[b];
    for (int i=0; i<a; i++){
        cin>>a1[i];
    }
    for (int i=0; i<b; i++){
        cin>>a2[i];
    }
    long long ans =0;
    int i=0, j=0;
    while(i<a && j<b){
        long long c1=0, c2=0, cur = a1[i];
        while(a1[i]==cur && i<a){
            c1++;
            i++;
        }
        while(cur>a2[j]){
            j++;
        }
        while(a2[j]==cur && j<b){
            c2++;
            j++;
        }
        ans+= c1*c2;
    }
    cout<<ans;
    return 0;
}