#include<bits/stdc++.h>
using namespace std;
void reverse_array(int *a,int start,int end,int n){
    int i=0;
    // for(int i=0;i<=n/2;i++){
        while(i<=n/2){           //complexity is O(n/2)
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
        i++;
    }
}
void print_array(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[] ={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    print_array(arr,n);
    reverse_array(arr,0,n-1,n);
    cout<<endl;
    print_array(arr,n);
    return 0;
}