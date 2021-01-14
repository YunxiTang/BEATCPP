/*Function return an array*/
#include <iostream>

using namespace std;

int * getArray()
{
	static int force[5];
	for(int i=0; i<5;++i)
	{
		force[i] = i;
	}
	return force;
}

int main(void)
{
	// a pointer pointing to an array
	int *p;
	p = getArray();
	for(int i=0; i<5; i++)
	{
		cout << "the array element is " << *(p+i) << endl;
	}
	return 0;
}

