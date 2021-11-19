#include<iostream>
#include<fstream>
using namespace std;
void test()
{
    fstream myFile;
    myFile.open("myFile.txt", ios::in | ios::out | ios::trunc);
    if(!myFile)
    {
        cout << "l" << endl;
    }
    // if(!myFile.is_open())
    // {
    //     cout << "l" << endl;
    // }
    myFile.close();
}

void ReadWriteFile(const char* readFileName,const char* writeFileName)
{
    fstream read(readFileName, ios::in);
    fstream write(writeFileName, ios::out);
    while(1)
    {
        char temp;
        read >> temp;
        if(read.eof())
        {
            break;
        }
        write << temp;
    }
    read.close();
    write.close();
}
void ReadWriteFile1(const char* readFileName,const char* writeFileName)
{
    fstream read(readFileName, ios::in);
    fstream write(writeFileName, ios::out);
    while(1)
    {
        int temp;
        read >> temp;
        if(read.eof())
        {
            break;
        }
        write << temp;
    }
    read.close();
    write.close();
}
int main()
{
    test();
    ReadWriteFile("1.txt", "2.txt");
    // ReadWriteFile1("1.xlsx", "2.xlsx");
    return 0;
}