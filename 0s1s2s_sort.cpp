#include<bits/stdc++.h>
using namespace std;
//sort 0 1 2 without using sort algorithm
void sort012(int *a,int n){
    int n0=0,n1=0,n2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                n0++;
            }
            else if(a[i]==1){
                n1++;
            }
            else if(a[i]==2){
                n2++;
            }
        }
        int index=0;
        for(int i=0;i<n0;i++){
            a[index++]=0;
        }
        for(int i=0;i<n1;i++){
            a[index++]=1;
        }
        for(int i=0;i<n2;i++){
            a[index++]=2;
        }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}