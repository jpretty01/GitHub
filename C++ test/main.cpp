#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> v;
    v.push_back("Hello");
    v.push_back("World");
    for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;
    return 0;
}