/*abstract class with virtual function
absract class cannot be used to create an object!
Only Work As an interface.
*/
#include <iostream>

using namespace std;

// base (abstract) class
class Ball
{
protected:
    double radius;
public:
    // virtual function declared with "=0"
    virtual double get_Area() = 0;
    void set_Radius(double R){
        radius = R;
    }
};

// Derived class
class smallBall: public Ball
{
    public:
        double get_Area()
        {
            return radius * radius;
        }
};


int main(void)
{
    smallBall myball;
    myball.set_Radius(12.3);
    cout << "Area is " << myball.get_Area() << endl;

    return 0;
}