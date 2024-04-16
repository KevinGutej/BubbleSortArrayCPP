#include <iostream>
#include <vector>

void bubbleSort(vector<int> &arr1)
{
    int n = arr1.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> arr1 = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr1);
    cout << "(Using bubble sort) Sorted array: ";
    for (int x : arr1)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}