#include<bits/stdc++.h>
using namespace std;
void printIt(map<int,int> m) {
    for(map<int,int>::iterator it=m.begin();it!=m.end();++it)
       cout <<it->second<<" ";
    cout << "\n";
}
int doUnion(int *a, int n, int *b, int m)  {
        //code here
        unordered_map<int,int>m1;
        for(int i=0;i<n;i++){
            m1.insert({a[i],i});
        }
        for(int j=0;j<m;j++){
            m1.insert({b[j],j});
        }
        // m1.insert(m2.begin(),m2.end());
        // printIt(m1);
        // printIt(m2);
        return m1.size();
}
int main(){
    int arr[]={2,4,3,5,6,-1,0};
    int brr[]={8,4,2,7,3,4};
    int n=sizeof(arr)/sizeof(int);
    int m=sizeof(brr)/sizeof(int);
    cout<<doUnion(arr,n,brr,m)<<endl;
    
    return 0;
}