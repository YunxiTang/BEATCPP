#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

void randNumer_test(void);

using namespace std;

int main(void)
{
    // define number variables
    short s = 10;
    int i = -2000;
    long l = 150314;
    float f = 3.14;
    double d = 200.13544;

    // math operation
    cout << "sin(d) :" << sin(d) << endl;
    cout << "abs(i) :" << abs(i) << endl;
    cout << "floor(d) :" << floor(d) << endl;
    cout << "sqrt(f) :" << sqrt(f) << endl;
    cout << "pow(f, s) :" << pow(f, s) << endl;
    randNumer_test();
    return 0;
    
}

void randNumer_test(void)
{
    int Len = 20;
    int j;
    srand((unsigned)time(NULL));
    for (int i = 0; i < Len; i++)
    {
        /* code */
        j = rand();
        cout << "Random Number is " << j << endl;
    }
    return;
}