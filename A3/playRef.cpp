/*引用(reference) in CPP*/
#include <iostream>

using namespace std;

void swap1(int *ptr1, int *ptr2);
void swap2(int& x, int& y);

// by pointer
void swap1(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// by refrence
void swap2(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void test1()
{
    int i;
    double d;

    // declare reference
    int& r = i;
    double& s = d;

    r=15;
    cout << "value of i: " << i << endl;
    cout << "value of i ref: " << r << endl;

    d = 15.64;
    cout << "value of d: " << d << endl;
    cout << "value of d ref: " << s << endl;
};

void test2()
{
    int x = 2;
    int y = 1;

    cout << "[Before swap] x is: " << x << endl;
    cout << "[Before swap] y is: " << y << endl;

    swap1(&x, &y);
    cout << "[After swap] x is: " << x << endl;
    cout << "[After swap] y is: " << y << endl;

}

void test3()
{
    int x = 2;
    int y = 1;

    cout << "[Before swap] x is: " << x << endl;
    cout << "[Before swap] y is: " << y << endl;

    swap2(x, y);
    cout << "[After swap] x is: " << x << endl;
    cout << "[After swap] y is: " << y << endl;

}

int main()
{
    test3();
    return 0;
}