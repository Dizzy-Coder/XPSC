#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a;
    cin>>a;
    if (a%2==0){
        cout<<a/2<<endl;
        for (int i=0; i<a/2; i++){
            cout<<2<<" ";
        }
    }
    else if (a==3) cout<<1<<endl<<3;
    else{
        cout<<a/2<<endl;
        for (int i=0; i<a/2-1; i++){
            cout<<2<<" ";
        }
        cout<<3;
    }
    return 0;
}