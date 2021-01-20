#include <iostream>

using namespace std;

//define a class
class Box
{
	public:
		double length;
		double width;
		double height;
		double get_Volumn(void);
		void set_box(double len, double wid, double hei);
};

void Box::set_box(double len, double wid, double hei)
{
	length = len;
	width = wid;
	height = hei;
}

double Box::get_Volumn(void)
{
	return length * width * height;
}

int main(void)
{
	Box mybox;
	double V;
	mybox.set_box(12.0,12.3,2.0);
	V = mybox.get_Volumn();
	cout << "Length of mybox: " << mybox.length << endl;
	cout << "Volmun of mybox: " << V << endl;
	return 0;
}
