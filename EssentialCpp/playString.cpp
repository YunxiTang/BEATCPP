#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World!";

    string str3;

    // concatenate strings
    str3 = str1 + " " + str2;
    cout << "Str3: " << str3 << "\n";

    // return the index of "W"
    cout << str3.find("W") << endl;

    // append a string
    cout << str3.append(" Kick off.") << endl;
    return 0;
}