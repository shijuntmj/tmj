//单继承，多继承
//使用委托构造进行初始化
#include<iostream>
#include<string>
using namespace std;
class MM
{
    public:
        MM(string name,int money):name(name),money(money)
        {
            cout << "father's" << endl;
        }
    protected:
    private:
        string name;
        int money;
};
class Son:public MM
{
    public:
        Son(string name,int money,int age):MM(name,money),age(age)
        {
            cout << "son's" << endl;
        }
        Son(int age) : MM("baby", 1000), age(age){}

    private:
        int age;
};
class A
{
    public:
        A(int a) : a(a) { cout << "A" << endl; }
        ~A() { cout << "~a" << endl; }

    private:
        int a;
};
class B
{
    public:
        B(int b) : b(b) { cout << "B" << endl; }
        ~B() { cout << "~b" << endl; }
    private:
        int b;
};
class C:public A,public B
{
    public:
        C(int a, int b, int c) : A(a), B(b), c(c) { cout << "C" << endl; }
        ~C() { cout << "~c" << endl; }
    private:
        int c;
};
int main()
{
    //Son son2("tt", 1999, 12);
    C c(1, 2, 3);

    return 0;

}