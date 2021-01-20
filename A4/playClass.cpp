#include <iostream>
#include <cstring>

using namespace std;

//define a class
class Box
{
	public:
		double length;
		double width;
		double height;
		double get_Volumn(void);
		// 构造函数 (no return. can access the private member too)
		Box(string name); 

		// 析构函数 (no return. No input. No need to call explicitly)
		~Box();
		// 成员函数 （定义与原型）
		void set_box(double len, double wid, double hei);

		double get_Area(void){
			return 2 * (length * width + length * height + width * height);
		}

		void set_Name(string name){
			Name = name;
		}

		void show_name(void){
			cout << "Name is " << Name << endl;
		}

	private:
		string Name;
};

Box::Box(string name)
{
	Name = name;
	cout << "Creating A Box Object named " << Name << endl;
}

Box::~Box(){
	cout << "Deleting the object named " << Name << endl; 
}


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
	Box mybox("SmallBox");
	double V;
	double S;
	mybox.set_box(12.0,12.3,2.0);
	// mybox.set_Name("BigBox");
	V = mybox.get_Volumn();
	S = mybox.get_Area();
	mybox.show_name();
	cout << "Length of mybox: " << mybox.length << endl;
	cout << "Volmun of mybox: " << V << endl;
	cout << "Surface area: " << S << endl;
	return 0;
}
