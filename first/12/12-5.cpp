#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<algorithm>
#include<chrono>
#include<functional>
#include"my_priority_queue.hpp"
using namespace std;
class M
{
    public:
        M(int age,string name):age(age),name(name){}
        bool operator<(const M& object) const
        {
            return this->age < object.age;
        }//重载<用于less比较
        bool operator>(const M& object) const
        {
            return this->age > object.age;
        }//重载>用于greater比较
        string getname() const
        {
            return name;
        }//top()返回是一个常对象，所以要const成员函数接口
        int getage() const
        {
            return age;
        }
    protected:
        int age;
        string name;
};
void test()
{
    // chrono::minutes();
    srand((unsigned int)time(nullptr));
    priority_queue<int> num1;
    priority_queue<int, vector<int>, greater<int>> num;
    for (size_t i = 0; i < 4; i++)
    {
        num.push(rand() % 10);
    }
    while (!num.empty())
    {
        cout << num.top() << "\t";
        num.pop();
    }
    cout << endl;
}
void test1()
{
    priority_queue<M, vector<M>, greater<M>> num;
    num.push(M(12, "m1"));
    num.push(M(13, "a1"));
    num.push(M(14, "m3"));
    while (!num.empty())    
    {
        cout << num.top().getage() << "\t";
        num.pop();
    }
    cout << endl;
}
class CompareByName
{
    public:
        bool operator()(const M& one,const M& two) const
        {
            return one.getname() > two.getname();
        }
    protected:
};
class CompareByAge
{
    public:
        bool operator()(const M& one,const M& two) const
        {
            return one.getage() < two.getage();
        }
    protected:
};
void test3()
{
    priority_queue<M, vector<M>, CompareByName> num;
    num.push(M(12, "m1"));
    num.push(M(13, "a1"));
    num.push(M(14, "m3"));
    while (!num.empty())    
    {
        cout << num.top().getname() << "\t";
        num.pop();
    }
    cout << endl;
}
void test4()
{
    My_priority_queue<M, vector<M>, less<M>> num;
    num.push(M(12, "m1"));
    num.push(M(13, "a1"));
    num.push(M(14, "m3"));
    while (!num.empty())    
    {
        cout << num.top().getname() << "\t";
        num.pop();
    }
    cout << endl;
}
int main()
{
    test();
    test1();
    test3();
    test4();
    getchar();
    return 0;
}