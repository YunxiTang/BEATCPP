#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

struct Dog
{
    string Name;
    int Age;
    double Height;
    double Weight;
};
void test(void)
{
    Dog smallDog;
    Dog *ptr = NULL;
    ptr = &smallDog;
    smallDog.Name = "Joe";
    smallDog.Age = 2;
    smallDog.Height = 0.31;
    smallDog.Weight = 5.3;

    cout << smallDog.Weight << endl;
    cout << ptr->Age << endl;
}

int main()
{
    unordered_map<string, string> spnumbers;
    unordered_set<int> mySet = {1,2,3,5,97,32};
    
    spnumbers = {{"one","uno"},{"two","dos"}};
  
    spnumbers["Three"] = "tres";
    spnumbers["Four"] = "cuatro";

    cout << "One is: " << spnumbers["one"] << endl;
    cout << spnumbers.size() << endl;
    spnumbers.erase("Four");

    // show how to iterate through a hash table
    for (auto i = spnumbers.begin(); i != spnumbers.end(); i++)
    {
        // A->B: A 是指向类，结构体，联合的指针， -> 表示成员提取
        cout << i->first << ":";
        cout << i->second << endl;
    }
    test();
    return 0;
}
