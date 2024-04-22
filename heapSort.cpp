#include <iostream>
#include <vector>

void heapSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i)
    {
        heapify(); // create a function called heapify
    }
    for (int i = n - 1; i > 0; --i)
    {
        swap(); // create function swap
        heapify();
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    heapSort(arr);
    cout << "Sorted array: ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
