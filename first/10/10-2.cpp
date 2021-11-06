// 类模板和类的继承模板是不完整的类，需要用带上<>
// 先声明，再定义
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
class Data//类模板
{
    public:
        Data(){}
        Data(_ty data) : data(data){}
        void print();

    protected:
        _ty data;
        static int count;
};

template <class _ty>//类模板的继承还是类模板
class MM:public Data<_ty>
{
    public:
        void print();
    protected:

};

class A//不是类模板
{
    public:
        template<class _ty>
        void print()//无参数成员函数模板
        {
            cout << "A" << endl;
        }
        template <class _ty>
        void print(_ty data)//有参数成员函数模板
        {
            cout << "A" <<data<< endl;
        }

    protected:
};

template <class _ty>
void Data<_ty>::print()//类模板成员函数的定义
{
    cout << data << endl;
}

template <class _ty>//类模板静态数据成员的定义
int Data<_ty>::count = 0;

template<class _ty>//类模板继承成员函数的定义
void MM<_ty>::print()
{
    cout<<"data"<< endl;
}

template<class _ty1,class _ty2>//模板类构造函数类外定义
class MyPair
{
    _ty1 first;
    _ty2 second;
    public:
        MyPair(_ty1 first, _ty2 second) : first(first), second(second){}
        MyPair();//不要加{}不然redefine
        void print()
        {
            cout << first << "\t" << second << endl;
        }
};

template <class _ty1, class _ty2>
MyPair<_ty1, _ty2>::MyPair(){}

template<class _ty1,class _ty2>//模板结构体构造函数定义
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
    // 三围
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
    p->print<int>();//无参数成员函数必须显示调用
    p->print(12);//有参数成员函数可以隐式调用

    MyPair<int, string> tempData = {12, "baby"};
    tempData.print();

    pair<int, string> tData = {123, "babyq"};//数对类型
    cout << tData.first << tData.second << endl;
    pair<int, string> tt = make_pair<int, string>(1, "baby");//make_pair顾名思义

    Girl<info> *pGirl = new Girl<info>(info(1,2,3));//以一个自定义类型info为参数的类模板
    cout << pGirl->getData() << endl;
    getchar();
    return 0;
}