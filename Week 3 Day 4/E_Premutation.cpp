#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> &a, pair<int,int> &b){
    return a.second > b.second;
}

int main()
{
    int x;
    cin>>x;
    for(int i=0; i<x; i++){
        int n;
        cin>>n;
        int ar[101] = {0};
        for (int i=0; i<n; i++){
            for (int j=0; j<n-1; j++){
                int a;
                cin>>a;
                ar[a]+=(101-j);
            }
        }
        for (int i=0; i<n; i++){
            int mx= 0, mid=0;
            for (int j=0; j<101; j++){
                if (ar[j]>mx){
                    mx = ar[j];
                    mid = j;
                }
            }
            cout<<mid<<" ";
            ar[mid]=0;
        }cout<<endl;
    }
    return 0;
}