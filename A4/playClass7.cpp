/*inline function*/
#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
    return (x > y)? x : y;
}

int main(void)
{
    cout << "Result is: " << Max(12, 26) << endl;
    cout << "Result is: " << Max(102, 261) << endl;
    cout << "Result is: " << Max(1205, 26) << endl;

    return 0;
}