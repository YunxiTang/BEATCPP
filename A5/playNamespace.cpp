/*
NAMESPACE IN CPP
*/

#include <iostream>

using namespace std;

// the first namespace
namespace first_space
{
    void func()
    {
        cout << "You are call this function in the first namespace." << endl;
    };
}

namespace second_space
{
    void func()
    {
        cout << "You are call this function in the second namespace." << endl;
    };
}

int main()
{
    first_space::func();
    second_space::func();
    return 0;
}