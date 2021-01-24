#include "practice.h"
#include <iostream>
using namespace std;
Box::Box()
{
	cout << "Constructing Object." << endl;
}

Box::~Box()
{
	cout << "Deleting Object." << endl;
}

void Box::set_param(double len, double wid, double hei)
{
	this->length = len;
	this->width = wid;
	this->height = hei;
}

double Box::get_Volume(void)
{
	return this->height * this->length * this->width;
}
