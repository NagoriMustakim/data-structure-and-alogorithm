#include <iostream>
#include "map"
#include "unordered_map"
using namespace std;

int main()
{
    // creation
    unordered_map<string, int> a;

    // insertion
    pair<string, int> p = make_pair("khan", 1);
    a.insert(p);
    // second way
    a["pp"] = 1;
    // this will update
    a["pp"] = 2;
    return 0;
}
