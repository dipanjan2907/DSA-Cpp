#include <stdio.h>
void reverseArray(int arr[], int size)
{
    int st = 0, end = size - 1;
    while (st < end)
    {
        arr[st] = arr[st] + arr[end];
        arr[end] = arr[st] - arr[end];
        arr[st] = arr[st] - arr[end];
        st++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    reverseArray(arr, size);
    printf("REVERSED: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}