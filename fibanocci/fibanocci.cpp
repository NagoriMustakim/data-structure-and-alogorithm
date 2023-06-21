#include "iostream"
using namespace std;
int fibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacciList(int range)
{
    if (range <= 1)
    {
        cout << 1;
    }
    else
    {
        int a = 1, b = 1, c;
        // 1 1 2 3 5 8 13
        cout << a << endl
             << b << endl;
        for (int i = 2; i < range; i++)
        {
            c = a + b;
            cout << c << endl;
            a = b;
            b = c;
        }
    }
}
int main()
{
    // cout << fibonacci(4);
    fibonacciList(1);
    return 0;
}