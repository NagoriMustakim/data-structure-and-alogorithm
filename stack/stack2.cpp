#include "iostream"
#include "stack"
using namespace std;

int main()
{
    // remove middle element [1,2,3,4,5] //remove 3
    stack<int> st;
    for (int i = 1; i <= 10; i++)
    {
        st.push(i);
        cout << "Element push is:" << st.top() << endl;
    }
    int size = st.size();
    cout << "size of stack is:" << size << endl;
    int mid = size / 2;
    int arr[mid];
    for (int j = 0; j <= mid; j++)
    {
        int top = st.top();
        arr[j] = top;
        st.pop();
    }
    cout << "size of stack is:" << st.size() << endl;

    for (int i = 0; i < mid; i++)
    {
        st.push(arr[i]);
    }
    cout << "size of stack is:" << st.size() << endl;
    
}