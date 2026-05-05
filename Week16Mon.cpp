#include <iostream>
#include "MinHeap.hpp"
using namespace std;

template <typename T>
void heapsort(vector<T>& arr) {
    MinHeap<T> h;

    for (const T& val : arr)
        h.insert(val);

    for (int i = 0; i < (int)arr.size(); i++)
        arr[i] = h.removeRoot();
}

int main() {
    vector<int> arr = {5, 1, 9, 3, 7, 4};

    heapsort(arr);

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}