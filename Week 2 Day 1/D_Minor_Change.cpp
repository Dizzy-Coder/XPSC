#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int s=a.size(),c=0;
    for (int i=0; i<s; i++){
        if(a[i]!=b[i]) c++;
    }
    cout<<c;
    return 0;
}