/*How to play arrays and vectors*/
#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> vec;
    int i;

    // show the original size of vec
    cout << "size of vec: " << vec.size() << endl;

    // push 5 values into vec
    for ( i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }

    // show the size of vec now
    cout << "size of extended vec: " << vec.size() << endl;
    for ( i = 0; i < 5; i++)
    {
        cout << "value of vec[" << i << "]: " << vec[i] << endl;
    }

    // use iterator to access value in vec
    vector<int>::iterator v=vec.begin();
    while (v != vec.end())
    {
        cout << "value of v: " << *v << endl;
        v++;
    }
    
    return 0;

}



