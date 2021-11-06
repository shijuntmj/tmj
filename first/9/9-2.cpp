// 虚函数>纯虚函数>抽象类
// 抽象类不能构造对象,只能用指针
#include<iostream>
using namespace std;
class MM
{
    public:
        virtual void print() = 0;
};
int main()
{
    MM* pmm=nullptr;
    cout << sizeof(MM) << endl;
    getchar();
    return 0;
}