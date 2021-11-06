/*
单继承情况下，dynamic_cast与static _cast效果是相同的；多继承情况下，只能使用dynamic_cast。
static_cast进行上行转换是安全的，但是进行下行转换是不安全的
dynamic_cast进行上行转换以及下行转换都是安全的
上行转化可以直接用不需要强制类型转化
*/
#include<iostream>
using namespace std;
class A
{
    public:
    virtual void print()
    {
        cout << "A" << endl;
    }
    protected:
        int a;
};
class B
{
    public:
    virtual void print()
    {
        cout << "B" << endl;
    }
    protected:
        int b;
};
class A1:public A
{
    public:
    virtual void print()
    {
        cout << "A1" << endl;
    }
    protected:
        int a1;
};
class A2:public A,public B
{
    public:
    virtual void print()
    {
        cout << "A2" << endl;
    }
    protected:
        int a2;
};

int main()
{
    //上行转化
    A *pu = static_cast<A *>(new A1);
    pu->print();
    A *pu1 = dynamic_cast<A *>(new A1);
    pu1->print();
    // 下行转化
    A1 *pd = static_cast<A1 *>(new A);
    pd->print();
    A1 *pd1 = dynamic_cast<A1 *>(new A);
    if(pd1!=nullptr)
        pd1->print();
    // 下行交叉转化
    // A1 *pup = dynamic_cast<A1 *>(new A);
    // A2 *pup1 = dynamic_cast<A2 *>(pup);          报错； 
    // pup1->print();
    // 上行交叉转化
    A *pmm = dynamic_cast<A *>(new A2);
    B *pmm1 = dynamic_cast<B *>(pmm);
    pmm1->print();
    pmm->print();
    while(1){
    };
    return 0;
}