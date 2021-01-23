/*
static member in class: 1. 静态成员在类的所有对象中是共享的
                        2. 在创建第一个对象时，所有的静态数据都会被初始化为零
                        2. 不能把静态成员的初始化放置在类的定义中
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
        static int countObj;
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
    countObj = ++countObj;
    cout << "Construct Function." << endl;
}

Box::~Box()
{
    cout << "Object Shutting Down." << endl;
}

int Box::countObj = 0; // initialize the static member

int main(void)
{
    Box box1(12.1,36.1,23.2);
    Box box2(12.8,38.1,23.3);

    cout << "Num of Box objs: " << Box::countObj << endl;

    return 0;
}