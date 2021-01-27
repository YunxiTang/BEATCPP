/*
动态内存： 特殊的运算符为给定类型的变量在运行时分配堆内的内存，返回所分配的空间地址 
new and delete
new    分配内存，创建对象.
delete 操作符释放所占用的内存
*/
#include <iostream>
using namespace std;

void test1(void)
{
    double *ptr = NULL;
    ptr = new double;

    *ptr = 29494.356;
    cout << "Value of *ptr: " << *ptr;

    delete ptr;   //释放内存
};

//2D数组的动态内存分配
void test2()
{
    int **p = NULL;
    int i, j;   // p[4][8]
    //(4,8) -- 2D array
    p = new int *[4];
    for(i=0;i<4;i++)
    {
        p[i] = new int[8];   
    }
    
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 8; j++)     
        {   
            if(j == 0) cout << endl;   
            cout << p[i][j] << "\t";   
        }
    }

    for(i = 0; i < 4; i++)
    {
        delete [] p[i];
    }
    delete [] p;
    
};

int main()
{
    test2();
    return 0;
}