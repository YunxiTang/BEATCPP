#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char robot[] = {'r','o','b','o','t','\0'};
	char site[] = "Click in";
	int Len;
	Len = strlen(robot);
	char s1[Len];
	cout << "TANG YUNXI" << endl;
	cout << robot << endl;
	cout << site << endl;
	/*some manipulation of string in CPP*/
	strcpy(s1, robot); // copy one string and assign it to another string
	cout << "s1 is: " << s1 << endl;
	strcat(robot, site);
	cout << "New robot is " << robot << endl; // put two string together
	int ret;
	ret = strcmp(robot, site);     // compare length of two strings

	char flag = 't';
	char *p;
	p = strchr(robot, flag);
	cout << "p is " << *p << endl;
	cout << "Compare with robot and site, result is: " << ret << endl; 
	return 0;
}

