//struct in C Plus Plus
#include <iostream>
#include <cstring>
using namespace std;

struct robot
{
	char name[30];
	int Nx;
	int Nu;
};

void print_robot(struct robot *rbt)
{
	cout << "Name: " << rbt->name << endl;
}

int main(void)
{
	robot rbt1;
	strcpy(rbt1.name, "pendubot");
	rbt1.Nx = 4;
	rbt1.Nu = 2;

	cout << "Name: " << rbt1.name << endl;
	cout << "Nx: " << rbt1.Nx << endl;
	cout << "Nu: " << rbt1.Nu << endl;
	print_robot(&rbt1);
	return 0;
}
