//ͬ������
//::����    ȫ�ֱ�����ȫ�ֺ���      
// ���������ͬ������    ���ͬ������
//��������  �ͽ�ԭ��
//����������  û��virtual��ָ������ ��virtual����������
// static_cast<>()      ǿ������ת��
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
        void printData() { cout << "�����ӡ" << endl; }

    protected:
    int a;
};
class B:public A
{
    public:
        B(int a,int b):b(b),A(a){}
        void printData() { cout << "�����ӡ" << endl; }
    protected:
        int b;
};
int main()
{
    print();
    //by object ��������
    A a(1);
    a.printData();
    B b(1, 2);
    b.printData();
    //by pointer û��virtual��ָ������ ����������
    A *pAB = new B(1, 2);
    pAB->printData();
    B *pBA = static_cast<B *>(&a);
    pBA->printData();
    getchar();
    return 0;
}