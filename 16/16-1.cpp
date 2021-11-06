//placehoders_n译为取列表的第n个数据
//function部分位置一一对应列表
//bind部分位置一一对应原函数
#include<iostream>
#include<functional>
#include<algorithm>
#include<string>
using namespace std;
class MM
{
};
void print(int a,MM b,string c,double d)
{
}
void test1(int a,double b,MM c,string d)
{

}
int main()
{
    function<void(MM,string,double,int)> func = bind(print, placeholders::_4, placeholders::_1, placeholders::_2, placeholders::_3);
    func(MM(), string("string"), (double)1.2, 12);
    function<void(int,MM,string,double)> fun1 = bind(test1, placeholders::_1, placeholders::_4, placeholders::_2, placeholders::_3);
    fun1(12, MM(), string("string"), 1.2);
    return 0;
}