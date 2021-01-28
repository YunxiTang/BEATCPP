/*预处理器： some statements start with #
预处理指令不是 C++ 语句，所以它们不会以分号（;）结尾
*/
#include <iostream>
#define DEBUG
#define PI 3.14159
#define MIN(a,b) (((a)<(b)) ? a : b)
 
using namespace std;

void test()
{
    int r = 3;
    cout << "value of length of a circle: " << 2*PI*r << endl;
}

void test2()
{
    int i, j;
    i = 211;
    j = 365;

    #ifdef DEBUG
        cerr << "Trace: Inside main function" << endl;
    #endif
    cout << "The minimum is: " << MIN(i,j) << endl;
    #ifdef DEBUG
        cerr <<"Trace: Coming out of main function" << endl;
    #endif
}

void test3()
{
    cout << "Value of __LINE__: " << __LINE__ << endl;
    cout << "Value of __FILE__: " << __FILE__ << endl;
    cout << "Value of __DATE__: " << __DATE__ << endl;
    cout << "Value of __TIME__: " << __TIME__ << endl;
}

int main()
{
    test2();
    test3();
    return 0;
}