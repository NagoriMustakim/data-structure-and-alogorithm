// inheritance polymorphism abstraction encapsulation are the pillars of oops
// encapsulation :wrapping data member and function advantages=> hiding data, read only
// inheritance : When a class derives from another class types:[single level multiple hybrid hairarcal]
// polymorphism: compile time `[function and operator overloading]` and run time types of polymorphism
// overloading and overriding
// abstraction implementation hiding like bank atm
// interface and abstract [Abstract class with pure virtual function]
// pure virtual function which does not have implementation
#include "iostream"
using namespace std;

// class parent
// {
// private:
//     int x = 1;

// public:
//     int geter()
//     {
//         return this->x;
//     }
// };

// class child : public parent
// {
// };
// int main()
// {
//     child obj;
//     cout << obj.geter();
//     return 0;
// }

class A
{
public:
    // method overloading
    void greet()
    {
        cout << "good morining";
    }
    void greet(string str)
    {
        cout << "good morning" << str;
    }
};
class c
{
public:
    // method overloading
    void greet()
    {
        cout << "good morining";
    }
    void greet(string str)
    {
        cout << "good morning" << str;
    }
};
class B : public A, c
{
public:
    // method overriding
    void greet()
    {
        cout << "good night";
    }
};
int main()
{
    B obj;
    A obj1;
    obj.greet();
    obj1.greet();
    return 0;
}