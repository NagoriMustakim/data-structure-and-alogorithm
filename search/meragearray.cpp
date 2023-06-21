#include "iostream"
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]) + sizeof(arr2) / sizeof(arr2[0]);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        if (i < (size) / 2)
        {
            arr[i] = arr1[i];
        }
        else
        {
            arr[i] = arr2[i - size / 2];
        }
    }

    // printing array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}