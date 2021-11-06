//基类和派生类
// 派生类:继承方式 基类
//继承方式是派生类中最低属性，不会升级
// 父类的私有属性不能被访问
#include<iostream>
using namespace std;
class M1
{
    public:
        int a;
        void print()
        {
            cout << "aa" << endl;
        }
    protected:
        int b;

    private:
        int c;

};
class M2:public M1
{
    public:
    protected:
    private:
};
class M3:protected M1
{

};
class M4:private M1
{
    public:
    friend int getC()
    {
        return 1;
    }
};
int main()
{

    return 0;
}