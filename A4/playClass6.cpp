/*friend function*/
#include <iostream>

using namespace std;

class Box
{
    private:
        double len;
    public:
        Box(double length);
        ~Box();
        friend void printLen(Box obj);
};

Box::Box(double length)
{
    len = length;
}

Box::~Box()
{
}

void printLen(Box box)
{
    cout << "Len of box: " << box.len << endl;
}

int main(void)
{
    Box mybox(20.3);
    printLen(mybox);
    return 0;
}
