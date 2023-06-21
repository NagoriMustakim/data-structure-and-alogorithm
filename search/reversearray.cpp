#include "iostream"
#include "typeinfo"
using namespace std;
void arrayReverse()
{
    int arr[] = {1, 2, 3, 4, 5, 12, 45, 76, 90, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int s = 0, e = size - 1;
    int temp = 0;
    while (s <= e)
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void intReverse(int num)
{
    int tempnum = num;
    int sum = 0;
    int last;
    while (num > 0)
    {
        last = num % 10;
        num = num / 10;
        sum = sum * 10 + last;
    }
    cout << sum;
}

bool isPalindrome(int num)
{
    int tempnum = num;
    int sum = 0;
    long int last;
    while (num > 0)
    {
        last = num % 10;
        num = num / 10;
        sum = sum * 10 + last;
    }
    if (sum == tempnum)
    {
        return true;
    }
    return false;
}
int main()
{
    // arrayReverse();
    // intReverse();
    // int num = 52275;
    // cout << isPalindrome(num);
    // int a = 23;
    // string str = to_string(a);
    // a = stoi(str);
    // cout << typeid(str).name();

    return 0;
}