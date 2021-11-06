// 虚函数 以及 函数指针
#include<iostream>
using namespace std;
class MM
{
    public:
        virtual void print();
        virtual void print2();
    protected:
        int age;
};
void MM::print()
{
    cout << "virtrual" << endl;
}
void MM::print2()
{
    cout << "virtrual" << endl;
}
class Box
{
protected:
    string num;
};
int Max(int a,int b)
{
    return a > b ? a : b;
}
int main()
{
    MM mm;
    cout << sizeof(Box) << endl;
    cout << sizeof(MM) << endl;
    
    typedef void (MM::*Func)();
    Func p = &MM::print;

    typedef int (*pMax)(int, int);
    pMax pmax = &Max;

    typedef void (*PRINT)();
    // int *pp = const_cast<int *>(&mm);
    getchar();
    return 0;
}