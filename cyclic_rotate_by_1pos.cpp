#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TC(t) while (t--)
#define loop(x, n) for(int x = 0; x < n; ++ x)
#define reverseloop(x, n) for(int x = n-1; x > 0; x--)
void rightRotateByOne(int *a, int n) //function for cyclically rotating an array once
{
   int temp = a[n-1];
//    for(int i = n-1; i > 0; i--)
    reverseloop(i,n){
      a[i] = a[i-1];
    }
   a[0] = temp;
}
void rightRotateBytwo(int *a, int n) //function for cyclically rotating an array twice
{
   int temp1 = a[n-1];
   int temp2 = a[n-2];
//    for(int i = n-1; i > 0; i--)
    reverseloop(i,n){
      a[i] = a[i-2];
    }
   a[0] = temp2;
   a[1] = temp1;
}
int main(){
    int arr[]={1,2,3,4,5,-6};
    int n = sizeof(arr)/sizeof(int);
    int temp;
    rightRotateByOne(arr,n);
   

    loop(i,n){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rightRotateBytwo(arr,n);
    loop(i,n){
        cout<<arr[i]<<" ";
    }


    return 0;
}