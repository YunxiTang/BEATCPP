#include  <iostream>

using namespace std;

/*
 test loop control in C++
*/
int test_while_loop(){
    // declare a local variable 
    int k = 10;
    while (k < 21)
    {
        /* code */
        cout << "This is " << k << " step." << endl;
        k++;
    }
    return 0;
}

int test_for_loop1(){
    // for loop
    int count = 50;
    for (int i = 0; i < count; i++)
    {
        /* code */
        if(i > 45){
            break;
        }

        cout << "This is the " << i << " step. \n";
    }
    return 0;
    
}

int test_for_loop2()
{
    int myArray[5] = {1, 2, 3, 4, 5};
    for (int &x : myArray)
    {
        /* code */
        x = x * 2;
        cout << x << endl;
    }
    return 0;
}

int test_dowhile_loop()
{
    int i = 1;
    do
    {
        /* code */
        cout << "This is the " << i << " step. \n";
        i++;

    } while (i < 20);
    return 0;
}

int main(){
    int flag;
    flag = test_for_loop1();
    return 0;

}