/*
多态：初始化对象不同导致行为不同
public继承virtual类型+不正常的指针引用
初始化对象为子类，则调用子类函数，初始化对象为父类 则调用父类函数
*/
#include<iostream>
using namespace std;
class MM
{
    public:
        virtual void print() { cout << "MM::print" << endl; }

    protected:
};
class Boy:public MM
{
    public:
        virtual void print() { cout << "Boy::print" << endl; }

    protected:
};

int main()
{
    //正常访问
    MM *pmm = new MM;
    pmm->print();
    Boy *pboy = new Boy;
    pboy->print();
    // 不正常访问 虚函数 有virtual看对象类型
    MM *pmm1 = new Boy;
    pmm1->print();
    Boy *pboy1 = dynamic_cast<Boy*>(new MM);//不安全
    if(pboy1!=nullptr)
        pboy1->print();
    Boy *pboy2 = static_cast<Boy *>(new MM);
    pboy2->print();
    while (1){}
    return 0;
}