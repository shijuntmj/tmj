/*
����������ڣ�����ʵ��
�����ռ�
*/
#include<iostream>
using namespace std;
class A
{
    public:
        class B;
};
class A::B
{
    public:
        void print();
};
void A::B::print()
{
    cout << "A::B::print" << endl;
}

class C
{
    public:
        class D
        {
            public:
                void print()
                {
                    cout << "C::D::print" << endl;
                }
        };
};
int main()
{
    A::B b1;
    b1.print();
    C::D d1;
    d1.print();
    while(1){};
    return 0;
}