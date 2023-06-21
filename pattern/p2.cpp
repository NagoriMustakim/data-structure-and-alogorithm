#include "iostream"
using namespace std;
int main()
{
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 4; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int n = 4;
    int number = 10;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 10; j >= i; ++j)
        {
            cout << number << " ";
            number--;
        }
        cout << endl;
    }

    return 0;
}