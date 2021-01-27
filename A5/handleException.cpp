/*handle exception in CPP
Three Keywords:
1. catch: 通过异常处理程序捕获异常
2. try  : try块中的代码标识将被激活的特定异常，常跟多个catch （try/catch）
3. throw: 当问题出现时，程序抛出一个异常
*/
#include <iostream>
using namespace std;
double division(int num1, int num2);
int main(void)
{
    int x = 50;
    int y = 0;

    double z = 0.0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch(const char* msg)
    {
        std::cerr << msg << '\n';
    }
    
    return 0;
}

double division(int num1, int num2)
{
    if (num2 == 0)
    {
        throw "[ERROR]: Division by zero condition!";
    }
    return num1/num2;
}