#include <bits/stdc++.h>

using namespace std;

int a[101];
int main()
{
    memset(a,0,10);
    int n;
    cin>>n;
    int arr[n];
    int maxx=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(a[arr[i]]>=maxx) maxx=a[arr[i]];
    }
    cout<<n-maxx;
    return 0;
}
