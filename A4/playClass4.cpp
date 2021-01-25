/*重载运算符*/
#include <iostream>

using namespace std;

class Box
{
    public:
        void set_height(float hei){
            height = hei;
        }

        void set_width(float wid){
            width = wid;
        }

        void set_length(float len){
            length = len;
        }

        float get_Volume(void){
            return length * width * height;
        }

        Box operator + (const Box &b){
            Box box;
            box.height = this->height + b.height;
            box.length = this->length + b.length;
            box.width = this->width + b.width;
            return box;
        }

    private:
        float height;
        float length;
        float width;
};

int main(void)
{
    Box box1, box2, box3;
    box1.set_length(1.02);
    box1.set_height(2.3);
    box1.set_width(23.2);

    box2.set_width(45.3);
    box2.set_height(145.1);
    box2.set_length(45.32);

    box3 = box1 + box2;

    float V3;
    V3 = box3.get_Volume();
    cout << "V3 is " << V3 << endl;
    return 0;
}