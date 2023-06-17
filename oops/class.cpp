#include "iostream"
using namespace std;
class hero
{ // class and object
  //  access modifier //private public protected :by deafault private
  //  data member
  //  constructor 1.by deafult 2.parameterised constructor 3. copy constructor shallow copy
  //  methods  // getter and setter
  //  shallow accessing same memory address
  //  deep copy having different memory address
  // destructor free memory
  // static which create data member which does not required to create obj to access static member
public:
    int i = 0;
    string xyz;
    void printpri()
    {
        i = 0;
        cout << i;
    }
    // static
    static int time;
    //  private: // only accessible to class
    //      int b = 1;

    // constructor //called when object is initialized
    hero()
    {
        cout << "default constructor" << endl;
    }
    // parameterised constructor pass the parameter when object is initialized
    hero(string str)
    {
        this->xyz = str;
        cout << "\nValue of String is: " << xyz;
    }
    //  getter and setter
    int geti()
    {
        return i;
    }
    void setter(int i)
    {
        i = i;
    }
    // destructor for static object destructor is called automatically and for dynamic need to called manually [delete obj]
    ~hero()
    {
        cout << "destructor is called";
    }
};

// satic assinging value
int hero::time = 3;
int main()
{
    // object static and dynamic
    // static
    // hero obj1;
    // obj1.i = 2;
    // obj1.printpri();

    // dynamic creation
    // hero *obj2 = new hero();
    // cout << obj2->geti();

    // constructor
    // hero obj;
    // hero obj1("helo world");
    // hero obj2(obj1); // copy constructor

    // static access without creating obj
    cout << hero::time;
    return 0;
}