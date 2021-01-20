#include <iostream>

using namespace std;

// parent class
class Shape
{
    private:
        
        
    public:
        Shape();
        ~Shape();
        void set_width(float wid){
            width = wid;
        }

        void set_length(float len){
            length = len;
        }
    protected:
        float width;
        float length;
        float depth = 1.0;
};

class  Cost
{
private:
    /* data */
public:
     Cost(/* args */);
    ~ Cost();
    float getCost(float area){
        cout << "Cost is " << 770.0 * area << endl;
        return 770.0 * area;
    }
};

 Cost:: Cost(/* args */)
{
    cout << "Creating Cost." << endl;
}

 Cost::~ Cost()
{
}


// child class
// using private, then child class cannot access members in base class
class Rectangle: public Shape, public Cost
{
    private:
        
    public:
        Rectangle();
        ~Rectangle();
        float get_Area(void){
            return length * width;
        }

        void show_dept(void){
            cout << "Depth is " << depth << endl;
        }
};

Rectangle::Rectangle(/* args */)
{
    cout << "Creating a Rectangle." << endl;
}

Rectangle::~Rectangle()
{
    cout << "Deleting a Rectangle." << endl;
}


Shape::Shape()
{
    cout << "Creating Shape." << endl;
}

Shape::~Shape()
{
    cout << "Deleting Shape." << endl;
}

int main(void){

    Rectangle myshape;

    float S;
    float price;

    myshape.set_length(11.0);

    myshape.set_width(6.0);

    myshape.show_dept();

    S =  myshape.get_Area();

    price = myshape.getCost(S);

    cout << S << endl;

    return 0;
}
