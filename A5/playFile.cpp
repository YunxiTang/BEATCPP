#include <iostream>
#include <fstream>
/*
Three new data type:
1. ofstream 输出文件流，用于创建并向文件写入信息
2. ifstream 输入文件流，用于从文件读取信息
3. fstrean  文件流（输出与输入）
*/
using namespace std;

int main()
{
    char data[100];

    // open file with write-in mode
    ofstream myFile;

    myFile.open("myfile.dat");

    cout << "Writing to the file." << endl;
    cout << "Enter your name: " << endl;
    cin.getline(data, 100);    // get one line

    // write information into the file
    myFile << data << endl;

    cout << "Enter your age: " << endl;
    cin >> data;
    cin.ignore();  // ignore left chars before

    myFile << data << endl;

    // close file
    myFile.close();

    // READ FILE
    ifstream infile;
    infile.open("myfile.dat", ios::in);
    cout << "Reading from File." << endl;
    infile >> data;
    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();
    return 0;

}