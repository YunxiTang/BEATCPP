/*Example 1: usage of pointer*/
//pointed_var_type *pointer-name
//int *ip       一个整型的指针
//double *dp    一个double型的指针
//float *fp     一个float型的指针
//char *ch      一个字符型的指针
// some normal manipulation of pointer in C++
// 1. define a pointer variable(type *var_name)
// 2. pass the address to the pointer
// 3. access the corresponding variable in the address
#include <iostream>

using namespace std;

int main(void)
{
	int var1 = 20;
	char var2[4]={'a','b','c','\0'};
	// * just means p is a pointer (address of some variable)
	int *p;
	char *q;

	p = &var1;

	q = &var2[0];

	cout << "The address of variable var1 is: " << &var1 << endl;

	cout << "The address of variable var2 is: " << &var2 << endl;
	
	cout << "var1 is: " << *p << endl;
	
	cout << "var2 is: " << *q << endl;

	return 0;

}
