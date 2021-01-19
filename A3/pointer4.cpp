#include <iostream>
/*pointer arrays*/
using namespace std;
const int MAX=3;
int main(void)
{
	int var[MAX] = {10,20,100};

	int *ptr[MAX];

	for(int i=0; i<MAX; i++)
	{
		ptr[i]=&var[i]; //赋值为整数的地址
	}

	for(int i=0; i<MAX; i++)
	{
		cout << "Value of var[" << i << "] = " << *ptr[i] << endl;
	}
	return 0;
}
