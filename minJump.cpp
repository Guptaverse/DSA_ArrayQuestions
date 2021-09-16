#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TC(t) while (t--)
#define loop(x, n) for(int x = 0; x < n; ++ x)
#define reverseloop(x, n) for(int x = n-1; x >= 0; x--)
#define ii(x) cin>>x
#define II(x,y) cin>>x>>y

int main(){
    int n;
    ii(n);
    int arr[n];
    loop(i,n) ii(arr[i]);
    loop(i,n) cout<<arr[i]<<" ";


    return 0;
}