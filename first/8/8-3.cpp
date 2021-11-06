//???????
//virtual ??
#include<iostream>
using namespace std;
class A
{
    public:
    A(int a):a(a){}
    private:
        int a;
};
class B:virtual public A
{
    public:
    B(int a,int b):A(a),b(b){}
    private:
        int b;
};
class C:virtual public A
{
    public:
    C(int a,int c):A(a),c(c){}
    private:
        int c;
};
class D:public C,public B
{
    public:
        D(int a, int b, int c, int d) : B(a, b), C(a, c), A(a),d(d){}
    private:
        int d;
};
int main()
{
    D d(1, 2, 3, 4);
    return 0;
}