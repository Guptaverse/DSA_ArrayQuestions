#include <bits/stdc++.h>
using namespace std;
int max_arr(int *a, int n)
{
    if (n == 1)
    {
        return a[n - 1];
    }
    int j = max_arr(a + 1, n - 1);
    if (a[0] > j)
    {
        return a[0];
    }
    else
    {
        return j;
    }
    return -1;
}
int min_arr(int *a, int n)
{
    if (n == 1)
    {
        return a[n - 1];
    }
    int j = min_arr(a + 1, n - 1);
    if (a[0] > j)
    {
        return j;
    }
    else
    {
        return a[0];
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2,0, 15, 3};
    int n = sizeof(arr) / sizeof(int);
    int max = max_arr(arr, n);
    int min = min_arr(arr, n);
    // cout<<"hello"<<endl;
    cout << max << endl;
    cout << min << endl;
    return 0;
}