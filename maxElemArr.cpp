//  Boyer Moore Algorithm
//  Assume the first element as the candidate.
//  Traverse the array:
//  If count == 0, choose the current element as the new candidate.
//  If the current element equals the candidate, increment count.
//  Otherwise, decrement count.
//  After one traversal, the candidate may be the majority element.
//  Traverse the array again to verify whether it appears more than n/2 times.
//  If yes, return the candidate; otherwise, return -1.

#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{
    if (n == 1)
        return arr[0];
    int majNum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            majNum = arr[i];
            count = 1;
        }
        else if (majNum == arr[i])
            count++;
        else
            count--;
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (majNum == arr[i])
            count++;
    }
    if (count > n / 2)
        return majNum;
    return -1;
}

int main()
{
    int arr[] = [ 1, 1, 2, 1, 3, 5, 1 ];
    return 0;
}
