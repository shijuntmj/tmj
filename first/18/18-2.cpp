#include<iostream>
#include<sstream>
using namespace std;
void test()
{
    stringstream a("kkkkk");
    stringstream b("swap");
    cout << a.str() << endl;
    a.str("aaaa");
    cout << a.str() << endl;
    a.str("");
    cout << a.str() << endl;
    a.swap(b);
    cout << a.str() << endl;
}
void test1()
{
    stringstream a;
    char str[20] = "";
    int v = 1829;
    a << v;
    a >> str;
    cout << str << endl;
    stringstream a1("ip地址: 192.182.1.2");//中间有一个空格，必须要
    char t[20] = "";
    a1 >> t;
    cout << t << endl;
    int array[4];
    for (int i = 0; i < 4; i++)
    {
        char temp;
        a1 >> array[i];//192输入array1
        a1 >> temp;//.流入temp
        cout << array[i] << "\t";
    }
}
int main()
{
    test();
    test1();
    system("pause");
    return 0;
}