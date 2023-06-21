#include "iostream"
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 9, 10, 34};
    int key = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, size, key);
    if (result == -1)
    {
        cout << "Elemenet does not found";
    }
    else
    {
        cout << "Element found at index: " << result;
    }
    return 0;
}