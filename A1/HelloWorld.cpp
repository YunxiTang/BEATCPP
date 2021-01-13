#include <iostream>

using namespace std;

// define a constant
#define LENGTH 1.0l
#define NewLine '\n'


// global variables
int d = 20;

int main(void){
    const int Width = 5;
    // this is a comment
    cout << "Hello C++!" << endl;

    // local variables
    int a, b, c;
    d = 1;
    a = 10;
    b = 20;
    c = a + b;

    cout << a << b << c << d << endl;
    cout << LENGTH;
    cout << NewLine;

    return 0;
}