/*重载运算符和重载函数*/
#include <iostream>

using namespace std;

class printData
{
private:
    
public:
    printData();
    ~printData();
    void print(int i){
        cout << "Integer is " << i << endl;
    }

    void print(double d){
        cout << "Double is " << d << endl;
    }

    void print(char c[]){
        cout << "Char is " << c << endl;
    }
};

printData::printData()
{
    cout << "creating printData class" << endl;
}

printData::~printData()
{
    cout << "deleting printData class" << endl;
}

int main(void)
{
    printData pd;
    char c[] = "Hello.";
    pd.print(5);

    pd.print(12.0);

    pd.print(c);

    return 0;
}
