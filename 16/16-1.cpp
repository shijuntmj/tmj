//placehoders_n��Ϊȡ�б�ĵ�n������
//function����λ��һһ��Ӧ�б�
//bind����λ��һһ��Ӧԭ����
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