/*
��̬����ʼ������ͬ������Ϊ��ͬ
public�̳�virtual����+��������ָ������
��ʼ������Ϊ���࣬��������ຯ������ʼ������Ϊ���� ����ø��ຯ��
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
    //��������
    MM *pmm = new MM;
    pmm->print();
    Boy *pboy = new Boy;
    pboy->print();
    // ���������� �麯�� ��virtual����������
    MM *pmm1 = new Boy;
    pmm1->print();
    Boy *pboy1 = dynamic_cast<Boy*>(new MM);//����ȫ
    if(pboy1!=nullptr)
        pboy1->print();
    Boy *pboy2 = static_cast<Boy *>(new MM);
    pboy2->print();
    while (1){}
    return 0;
}