// stack: A Stack is a linear data structure that follows the LIFO (Last-In-First-Out)
// 1.push 2.pop
// 3.pip gives peek of stack 4.isemty
// can be  made by array and linked list
#include "iostream"
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;
        this->top = -1;
        arr = new int[size];
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop(int element)
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "\nstack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop(5);
    st.pop(4);
    st.pop(3);
    st.pop(2);
    st.pop(1);
    cout << st.peek();
    return 0;
}