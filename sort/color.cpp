#include "iostream"
using namespace std;
int main()
{

    int arr[] = {2, 0, 2, 1, 1, 0}; // 0 for red 1 for white and 2 for blue
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}