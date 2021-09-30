#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(i=0;i<n;i++){
        b[(i+n-k)%n]=a[i];
    }
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
