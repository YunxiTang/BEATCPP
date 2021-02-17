/*vector and array are indexed, list is a doublely linked list*/
#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

typedef list<int> LISTINT;
typedef list<string> LISTSTR;

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    vector<int> vec;
    vector<string> str_vec;
    LISTINT list_a;
    LISTSTR list_b;

    vec.reserve(5);
    str_vec.reserve(5);

    list_a.push_front(3);
    list_a.push_front(1);
    list_a.push_back(23);
    list_a.push_back(32);

    // LISTINT::iterator i = list_a.begin();            // declare i is an iterator
    auto i = list_a.begin();
    while (i != list_a.end())
    {
        cout << "value of list_a: " << *i << endl;
        i ++;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i);
        str_vec.push_back("hello");
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "value of vec[" << i << "]: " << vec[i] << endl;
        cout << "The address of vec[" << i << "]:" << &vec[i] << endl;
        
        cout << "value of str_vec[" << i << "]: " << str_vec[i] << endl;
        cout << "The address of str_vec[" << i << "]:" << &str_vec[i] << endl;
    }

    cout << vec.front() << endl; // get the first element
    cout << vec.back() << endl;  // get the last element
    str_vec.clear();             // clear the vector
    return 0;
}