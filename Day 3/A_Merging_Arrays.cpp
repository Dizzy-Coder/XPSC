#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ar[a],arr[b];
    for (int i=0; i<a; i++){
        cin>>ar[i];
    }
    for (int i=0; i<b; i++){
        cin>>arr[i];
    }
    int i=0, j=0;
    while(i<a || j<b){
        if (i==a && j<b){
            cout<<arr[j]<<" ";
            j++;
        }
        else if (j==b && i<a){
            cout<<ar[i]<<" ";
            i++;
        }
        else if (i<a && j<b){
            if (ar[i]<arr[j]){
                cout<<ar[i]<<" ";
                i++;
            }
            else{
                cout<<arr[j]<<" ";
                j++;
            }
        }
    }
    return 0;
}