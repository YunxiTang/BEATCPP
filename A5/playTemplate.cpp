/*how to use template in CPP*/
#include <iostream>
#include <string>

using namespace std;

// function template
// template: keyword
// T: represent any kind of variable type (int, double, ...)
template <typename T>
inline T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}

int main()
{
    int i = 39;
    int j = 28;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 
 
    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): " << Max(s1, s2) << endl; 
 
    return 0;
}