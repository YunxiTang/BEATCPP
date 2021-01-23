/*this pointer in C++:
Every object can access its own address by this pointer.
this pointer is actually hidden arg of every member method
每个对象都有一个特殊的指针 this，它指向对象本身.
*/
#include <iostream>

using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;

public:
    Box(double len, double wid, double hei);
    ~Box();
    double getVolume(void);
    int compare(Box box)
    {
        return this->getVolume() > box.getVolume();
    }
};

double Box::getVolume(void)
{
    return height*length*width;
}

Box::Box(double len, double wid, double hei)
{
    length = len;
    height = hei;
    width = wid;
    cout << "Construct Function." << endl;
}

Box::~Box()
{
    cout << "Object Shutting Down." << endl;
}


int main(void)
{
    Box box1(12.0,3.1,56.2);
    Box box2(11.6,4.2,55.9);

    if (box1.compare(box2))
    {
        cout << "box 1 is larger." << endl;
    }
    else
    {
        cout << "box 2 is larger." << endl;
    }
    
    return 0;
}