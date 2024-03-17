#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ar[a], ar2[b];
    for (int i=0; i<a; i++){
        cin>>ar[i];
    }
    for (int i=0; i<b; i++){
        cin>>ar2[i];
    }
    int i=0;
    for (int j=0; j<b; j++){
        while(i<a && ar[i]<ar2[j]){
            i++;
        }
        cout<<i<<" ";
    }
    return 0;
}