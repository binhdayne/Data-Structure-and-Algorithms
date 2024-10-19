#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void quicksort(vector<int> & arr, int l, int r) {
    //sort array from [l,r]
    if (r-l <=1) return;
    auto pivot = arr[r-1];
    
    int first_higher = l;
    for (int i = l; i < r-1; ++i) {
        if (arr[i] < pivot) {
            swap(arr[i], arr[first_higher]);
            ++first_higher;            
        }
    }
    swap(arr[first_higher], arr[r-1]);
    for (auto i : arr) cout<< i << " ";
    cout<<endl;
   
    quicksort(arr, l, first_higher);
    quicksort(arr, first_higher+1, r);
    
}

int main() {
   int n; cin >> n;
   vector<int> arr;
   for (int i=0;i<n;i++) {
       int x;
       cin >> x;
       arr.push_back(x);
   }
   quicksort(arr, 0, arr.size());
    return 0;
}
