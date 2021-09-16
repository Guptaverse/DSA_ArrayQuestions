#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TC(t) while (t--)
#define loop(x, n) for(int x = 0; x < n; ++ x)
#define reverseloop(x, n) for(int x = n-1; x >= 0; x--)

int main(){
    int k, n;
    cin>>k>>n;
    int arr[n];
    loop(i,n) cin>>arr[i];
    sort(arr,arr+n);
    // loop(i,n) cout<<arr[i]<<" ";
    
    return 0;
}