//operator Ŀ������(){return Ŀ��ֵ}
//��������ȡ���ݲ���������ʽת��
//���������()
#include<iostream>
using namespace std;
class MM
{
    public:
        MM(string name="hhh", int age=12) : name(name), age(age){};
        operator int()
        {
            return this->age;
        }
        operator string()
        {
            return this->name;
        }
        void operator()(/*���Դ���*/)
        {
            cout << "Ч������������" << endl;
        }
    protected:
        string name;
        int age;
};
class Func
{
private:
    
public:
    void operator()();
};
    void Func::operator()()
    {
        cout << "aaa" << endl;
    }
int main()
{
    MM mm1("baby", 13);
    int num = mm1;
    string str = mm1;
    mm1.operator()();
    mm1();
    Func()();
    cout << num <<"\t"<<str<< endl;
    getchar();
    return 0;
}