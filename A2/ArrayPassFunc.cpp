/*pass an array to a function*/
#include <iostream>

using namespace std;

/*the first method*/
double getAverage(int arr[], int num)
{
	int sum = 0;
	double average;
	for(int i=0; i<num; i++)
	{
		sum = sum + arr[i];
	}
	average = sum / num;
	return average;
}

int main(void)
{
	int banlance[5] = {12, 36, 98, 489, 23};
	double ret;
	double ret2;
	ret = getAverage(banlance, 5);
	cout << "Method 1: Average of the banlance is " << ret << endl;
	return 0;
}



