#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a; long long int b,c;
    cin>>a>>b;
    for (int i=0; i<a; i++){
        cin>>c;
        if (c!=b) cout<<c<<" ";
    }
    return 0;
}