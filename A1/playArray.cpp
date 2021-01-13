#include <iostream>
#include <iomanip>
/*Play with array
Array as a data structure, is supported in C++
*/
using namespace std;

int main(void){
    // declare an array
    int balance[10];
    cout << "Index" << setw(15) << "Value" << endl;
    // initialize the array
    for (int i = 0; i < 10; i++)
    {
        balance[i] = i + 5;
        cout << i << setw(15) << balance[i] << endl;
    }
    
    return 0;
    
}
