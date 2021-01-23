/*
指向类的指针： 需要使用成员访问运算符 ->
              必须在使用指针之前，对指针进行初始化
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

    Box *ptr2Box = NULL;

    ptr2Box = &box1;
    cout << "Volume of box1: " << ptr2Box->getVolume() << endl;

    ptr2Box = &box2;
    cout << "Volume of box2: " << ptr2Box->getVolume() << endl;

    return 0;

}