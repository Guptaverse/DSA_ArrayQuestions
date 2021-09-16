#include<bits/stdc++.h>
using namespace std;
//using sort function
void negative_elements_usingsort(int *a,int n){
    sort(a,a+n);
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}
//using partition algorithm
void negative_elements(int *a,int n){
    int pivot=0,i=-1; //pivot will be reference and i will come in action when we find our first negative,so for zeroth index i=-1,i++
    for(int k=0;k<n;k++){
        if(a[k]<pivot){
            i++;
            swap(a[i],a[k]);
        }
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}
int main(){
    int arr[]={-1,2,-5,-3,0,2};
    int n = sizeof(arr)/sizeof(int);
    negative_elements(arr,n);
    cout<<endl;
    negative_elements_usingsort(arr,n);
    return 0;
}