// ��ģ�����ļ̳�ģ���ǲ��������࣬��Ҫ�ô���<>
// ���������ٶ���
/*
template <class _ty>
void Data<_ty>::print()
{
    cout << data << endl;
}
class MM:public Data<_ty>
*/ 
#include<iostream>
using namespace std;
template<class _ty>
class Data//��ģ��
{
    public:
        Data(){}
        Data(_ty data) : data(data){}
        void print();

    protected:
        _ty data;
        static int count;
};

template <class _ty>//��ģ��ļ̳л�����ģ��
class MM:public Data<_ty>
{
    public:
        void print();
    protected:

};

class A//������ģ��
{
    public:
        template<class _ty>
        void print()//�޲�����Ա����ģ��
        {
            cout << "A" << endl;
        }
        template <class _ty>
        void print(_ty data)//�в�����Ա����ģ��
        {
            cout << "A" <<data<< endl;
        }

    protected:
};

template <class _ty>
void Data<_ty>::print()//��ģ���Ա�����Ķ���
{
    cout << data << endl;
}

template <class _ty>//��ģ�徲̬���ݳ�Ա�Ķ���
int Data<_ty>::count = 0;

template<class _ty>//��ģ��̳г�Ա�����Ķ���
void MM<_ty>::print()
{
    cout<<"data"<< endl;
}

template<class _ty1,class _ty2>//ģ���๹�캯�����ⶨ��
class MyPair
{
    _ty1 first;
    _ty2 second;
    public:
        MyPair(_ty1 first, _ty2 second) : first(first), second(second){}
        MyPair();//��Ҫ��{}��Ȼredefine
        void print()
        {
            cout << first << "\t" << second << endl;
        }
};

template <class _ty1, class _ty2>
MyPair<_ty1, _ty2>::MyPair(){}

template<class _ty1,class _ty2>//ģ��ṹ�幹�캯������
struct KK
{
    _ty1 a;
    _ty2 b;
    KK(_ty1 a,_ty2 b):a(a),b(b){}
    KK();
};
template<class _ty1,class _ty2>
KK<_ty1,_ty2>::KK(){}

struct info
{
    // ��Χ
    int x;
    int y;
    int z;
    info(int x, int y, int z) : x(x), y(y), z(z){};
};
ostream& operator<<(ostream& out,const info& object)
{
    out << object.x << "\t" << object.y << "\t" << object.z;
    return out;
}
template<class _ty1>
class Girl
{
    public:
    Girl(_ty1 data):data(data){}
    _ty1 getData()
    {
        return data;
    }
    protected:
        _ty1 data;
};

int main()
{
    Data<string> temp("baby");
    temp.print();

    Data<string> *ptemp = new Data<string>("baby");
    ptemp->print();

    MM<int> mm;
    mm.print();

    A *p = new A;
    p->print<int>();//�޲�����Ա����������ʾ����
    p->print(12);//�в�����Ա����������ʽ����

    MyPair<int, string> tempData = {12, "baby"};
    tempData.print();

    pair<int, string> tData = {123, "babyq"};//��������
    cout << tData.first << tData.second << endl;
    pair<int, string> tt = make_pair<int, string>(1, "baby");//make_pair����˼��

    Girl<info> *pGirl = new Girl<info>(info(1,2,3));//��һ���Զ�������infoΪ��������ģ��
    cout << pGirl->getData() << endl;
    getchar();
    return 0;
}