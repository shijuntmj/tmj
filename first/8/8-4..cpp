//同名问题
//::修饰    全局变量和全局函数      
// 父类和子类同名函数    解决同名问题
//正常访问  就近原则
//不正常访问  没有virtual看指针类型 有virtual看对象类型
// static_cast<>()      强制类型转化
#include<iostream>
using namespace std;
int num = 1000;
void print()
{
    int num = 0;
    cout << num << endl;
    cout << ::num << endl;
}
class A
{
    public:
        A(int a):a(a){}
        void printData() { cout << "父类打印" << endl; }

    protected:
    int a;
};
class B:public A
{
    public:
        B(int a,int b):b(b),A(a){}
        void printData() { cout << "子类打印" << endl; }
    protected:
        int b;
};
int main()
{
    print();
    //by object 正常访问
    A a(1);
    a.printData();
    B b(1, 2);
    b.printData();
    //by pointer 没有virtual看指针类型 不正常访问
    A *pAB = new B(1, 2);
    pAB->printData();
    B *pBA = static_cast<B *>(&a);
    pBA->printData();
    getchar();
    return 0;
}