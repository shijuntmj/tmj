#include<iostream>
#include<filesystem>
using namespace std;
//
int main()
{
    filesystem::path url("fileBox");
    if(!filesystem::exists(url))
    {
        cout << "������" << endl;
    }
    system("pause");
    return 0;
}