/*Chapter 4. Object-Based Programming 
1. The class name serves as a type name in the same way as the built-in type names
*/

#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    string pooh[4] = {
        "winnie","robin","eeyore","piglet"
    };
    string dummy("dummy");
    cout << dummy.size() << endl;
    vector<string> svec1(4);
    vector<string> svec2(4, dummy);
    vector<string> svec3(pooh, pooh+4);

    cout << "size of svec2: " << svec2.size() << endl;
    cout << "size of svec3: " << svec3.size() << endl;
    for (int i = 0; i < svec3.size(); i++)
    {
        cout << "svec3: " << svec3[i] << endl;
        // cout << "svec3: " << svec3[i] << endl;
    }

    return 0;
    
}