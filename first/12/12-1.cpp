// list container
#include<iostream>
#include<list>
#include"mylist.hpp"
#include<string>
using namespace std;
template<class _ty>
void printData1(list<_ty>& listData)
{
    for(auto v:listData)
    {
        cout << v << "\t";
    }
    cout << endl;
}
void printData2(list<string>&listData)
{
    for (list<string>::iterator iter = listData.begin(); iter != listData.end();iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}
void printData3(list<string> listData)
{
    while (listData.size()!=0)
    {
        cout << listData.front();
        listData.pop_front();
    }
    cout << endl;
}
void printData4(list<string> listData)
{
    while (!listData.empty())
    {
        cout << listData.back();
        listData.pop_back();
    }
    cout << endl;
}
void sort_t(list<string> listData)
{
    listData.sort(less<string>());
    printData1(listData);
    listData.sort(greater<string>());
    printData1(listData);
    listData.reverse();
    printData1(listData);
}
void testList()
{
    myList<string> mylist;
    cout << mylist.size() << endl;
    for (size_t i = 0; i < 3; i++)
    {
        string my_str = "mystr" + to_string(i);
        mylist.push_front(my_str);
    }
    myList<string>::iterator iter;
    for (iter = mylist.begin(); iter != mylist.end();++iter)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}
int main()
{
    list<string> listData;
    listData.push_back("bb");
    listData.push_back("cc");
    listData.push_front("aa");
    sort_t(listData);
    testList();
    // printData1(listData);
    // printData2(listData);
    // printData3(listData);
    // printData4(listData);
    getchar();
    return 0;
}