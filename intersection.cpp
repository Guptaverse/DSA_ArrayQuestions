#include<bits/stdc++.h> 
using namespace std;
void printIntersection(int *arr1, int *arr2, int n, int m) {
    unordered_map<int, int> map;
    // Build the frequency map for arr1
    for (int i = 0; i < n; i++) {
        auto it = map.find(arr1[i]);
        if (it != map.end()) {
            it->second = it->second + 1;
        } else {
            map.insert(make_pair(arr1[i], 1));
        }
    }
    
    // Traverse the elements of arr2 one by one
    for (int i = 0; i < m; i++) {
        auto it = map.find(arr2[i]);
        // If the map contains current element
        if (it != map.end()) {
            // Reduce the frequency by 1
            it->second = it->second - 1;
            // If freq becomes 0, remove the element from the map
            if (it->second == 0) {
                map.erase(arr2[i]);
            }
            // Print the element
            cout<<arr2[i]<<" ";
        }
    }
    cout<<endl;
}
int main() {
    // Example 1
    int arr1[] = {1, 2, 2, 1};
    int arr2[] = {2, 2};
    
    printIntersection(arr1, arr2, sizeof(arr1)/ sizeof(arr1[0]), 
            sizeof(arr2) / sizeof(arr2[0]));
            
    // Example 2
    int arr3[] = {4, 9, 5};
    int arr4[] = {9, 4, 9, 8, 4};
    
    printIntersection(arr3, arr4, sizeof(arr3) / sizeof(arr3[0]), 
            sizeof(arr4) / sizeof(arr4[0]));
}