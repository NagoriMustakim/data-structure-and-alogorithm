#include "iostream"
using namespace std;
int main()
{

    int arr[] = {10, 3, 56, 34, 12, 9, 0};
    for (int i = 1; i < 7; i++)
    {
        for (int j = 0; j < 7 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}