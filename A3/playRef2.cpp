/*把引用作为函数返回值*/
#include <iostream>

using namespace std;
double vals[]={10.1,23.5,6.9,5.2,7.8};

double& setValue(int i)
{
    return vals[i]; // 返回vals[i]的引用
}

int main()
{
    cout << "[Before Change]: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << "vals[" << i << "]: " << vals[i] << endl;
    }
    setValue(1) = 12.5;
    setValue(2) = 100.236;

    cout << "[After Change]: " << endl;
    for(int i=0; i<5; i++)
    {
        cout << "vals[" << i << "]: " << vals[i] << endl;
    }
    return 0;
}