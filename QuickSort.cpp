#include <iostream>
#include <vector>
using namespace std;

void partition(vector<int> &arr, int st, int end)
{
    int idx = st - 1, pivot = arr[end];

    for (int j = st; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            idx++;
            swap(arr[j], arr[idx]); // bringing smaller elements to leftmost positions (left of pivot   )
        }
    }
    idx++;
    swap(arr[end], arr[idx]); // bringing pivot to correct position
    return idx;
}

void quickSort(vector<int> &arr; int st, int end)
{
    if (st < end)
    {
        int pivIdx = partition(arr, st, end);
        quickSort(arr, st, pivIdx - 1);  // left Half
        quickSort(arr, pivIdx + 1, end); // right half
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    return 0;
}
