#include <iostream>
/*condition control in Cpp*/

using namespace std;

int test_if(int x)
{
    if (x <= 10)
    {
        cout << x << " is less than 10 \n";
    }
    else
    {
        /* code */
        cout << x << " is larger than 10. \n";
    }
    
    return 0;
}

int test_switch(char x)
{
    switch (x)
    {
    case 'A':
        cout << "This is a letter (A) \n";
        break;
    case 'a':
        cout << "This is a letter (a) \n";
    default:
        cout << "Not A nor a \n"; 
        break;
    }
    return 0;
}

int test_conditionsign(int x)
{
    x <= 20? x++: x--;
    cout << "New x is " << x;
    return x;
}

int main(){
    int y = 20;
    char x = 'b';
    test_if(y);
    test_switch(x);
    test_conditionsign(y);
    return 0;
}