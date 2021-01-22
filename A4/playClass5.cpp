/*拷贝构造函数*/
#include <iostream>

using namespace std;

class Line
{
private:
    int *ptr;
public:
    Line(int len);
    Line(const Line &obj);
    ~Line(void);
    int getlen()
    {
        return *ptr;
    }
};

Line::Line(int Len)
{
    cout << "call construct function to create a line" << endl;
    // 为指针开辟储存空间
    ptr = new int;
    *ptr = Len;
}

Line::Line(const Line &obj)
{
    cout << "call copy-construct function and allocate memory for pointer." << endl;
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line(void)
{
    cout << "Release memory" << endl;
}

void display(Line obj)
{
    cout << "Length of line: " << obj.getlen() << endl;
}

int main(void)
{
    Line line(20);
    Line line2 = line;

    display(line);
    display(line2);

    return 0;
}
