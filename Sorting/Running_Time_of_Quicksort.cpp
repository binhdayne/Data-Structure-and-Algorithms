#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector<int> arr, int n, int& count)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            count++;
        }
        arr[j + 1] = key;
    }
}

void quickSort(vector<int> &vec, int low, int high, int& count) {
    if (low < high) {
   
    int pivot = vec[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (vec[j] <= pivot) {
            i++;
            swap(vec[i], vec[j]);
            count++;
        }
    }

    swap(vec[i + 1], vec[high]);
    count++;
        int pi = i+1;
        quickSort(vec, low, pi - 1, count);
        quickSort(vec, pi + 1, high, count );
    }
}
int main() {
   int n;
   int count=0;
   int count2=0;
   cin >> n;
    vector<int> vec, vec2;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
        vec2.push_back(x);
    }
    insertionSort(vec2, n, count2);
    quickSort(vec, 0, n - 1, count);
    cout << count2 - count;

    return 0;
}
