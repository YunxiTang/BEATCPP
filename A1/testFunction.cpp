#include <iostream>
/*function usage of function in CPP*/
int max(int, int);
void swap(int *x, int *y);

int main(void)
{
    int x = 12;
    int y = 13;
    int Large;
    Large = max(x, y);
    std::cout << Large <<std::endl;

    std::cout << "Before swaping" << std::endl;
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    swap(&x, &y);
    std::cout << "After swaping" << std::endl;
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
}

int max(int num1, int num2)
/*传值调用，形式参数不会影响实际参数 --- simple version*/
{
    int result;
    if (num1 < num2)
        result = num2;
    else if (num1 > num2)
        result = num1;
    else
        result =num2;
    return result;  
}

void swap(int *x, int *y)
/*指针调用， 形式参数会影响实际参数*/
{
    int temp;
    temp = *x; // 保存地址x的值
    *x = *y;   // 把y赋值给x
    *y = temp; // 把x赋值给y
    return;
}