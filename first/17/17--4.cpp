#include<iostream>
#include<memory>
#include<string>
#include<functional>
using namespace std;

/*
auto �����и�ֵ����
auto a=1;
*/
class MM
{
    public:
    protected:
};
void print(int a,string b,MM c)
{

}
int main()
{
    auto func = bind(print, placeholders::_1, placeholders::_3, placeholders::_2);
    return 0;
}