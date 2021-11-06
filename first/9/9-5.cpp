/*
���̳�����£�dynamic_cast��static _castЧ������ͬ�ģ���̳�����£�ֻ��ʹ��dynamic_cast��
static_cast��������ת���ǰ�ȫ�ģ����ǽ�������ת���ǲ���ȫ��
dynamic_cast��������ת���Լ�����ת�����ǰ�ȫ��
����ת������ֱ���ò���Ҫǿ������ת��
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
    //����ת��
    A *pu = static_cast<A *>(new A1);
    pu->print();
    A *pu1 = dynamic_cast<A *>(new A1);
    pu1->print();
    // ����ת��
    A1 *pd = static_cast<A1 *>(new A);
    pd->print();
    A1 *pd1 = dynamic_cast<A1 *>(new A);
    if(pd1!=nullptr)
        pd1->print();
    // ���н���ת��
    // A1 *pup = dynamic_cast<A1 *>(new A);
    // A2 *pup1 = dynamic_cast<A2 *>(pup);          ���� 
    // pup1->print();
    // ���н���ת��
    A *pmm = dynamic_cast<A *>(new A2);
    B *pmm1 = dynamic_cast<B *>(pmm);
    pmm1->print();
    pmm->print();
    while(1){
    };
    return 0;
}