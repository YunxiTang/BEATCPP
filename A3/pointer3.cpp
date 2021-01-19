/*operators of pointer is CPP*/
#include <iostream>

using namespace std;
const int MAX = 3;

int test1(void)
{
	// 递增一个指针
	int var[MAX] = {10,100,1000};

	int *ptr = NULL;

	ptr = var;
	for(int i=0;i<MAX;i++)
	{
		cout << "Address of var[" << i << "] = " << ptr << endl;

		cout << "(By Index)Value of var[" << i << "] = " << var[i] << endl;

		cout << "(By Pointer)Value of var[" << i <<"] = " << *ptr << endl;
		ptr++;
	}
	return 0;
}

int test2(void)
{
	//递减一个指针
	int var[MAX] = {10,100,1000};

	int *ptr = NULL;
	
	ptr = &var[MAX-1];

	for(int i=MAX;i>0;i--)
	{
		cout << "Address of var[" << i << "] = " << ptr << endl;
		cout << "(By Pointer) Value of var[" << i << "] = " << *ptr << endl;
		ptr--;
	}
	return 0;
}

int test3(void)
{
	//指针的比较
	int var[MAX] = {10,100,1000};

	int *ptr = NULL;

	ptr = var;

	int i = 0;

	while(ptr <= &var[MAX-1])
	{
		cout << "Address of var[" << i << "] = " << ptr << endl;
		cout << "(By Pointer) Value of var[" << i << "] = " << *ptr << endl;

		ptr = ptr + 1;
		i = i + 1;
	}
	return 0;
}

int main(void)
{
	int k = 1;

	cin >> k;

	if(k==1)
	{
		test1();
	}
	else if (k==2)
	{
		test2();
	}
	else if (k==3)
	{
		test3();
	}
	else
	{}
	return 0;
}




