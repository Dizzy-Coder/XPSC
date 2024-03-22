#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for (int i=0; i<=a; i++){
        for (int j=0; j<=a; j++){
            if (b>=(i+j)){
                int s=b-(i+j);
                if (s<=a){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}