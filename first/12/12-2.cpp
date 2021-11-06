#include<iostream>
#include<stack>
#include<string>
#include"mystack.hpp"
using namespace std;
class Mstack
{
    public:
        Mstack(string sta_name, int sta_a) : sta_name(sta_name), sta_a(sta_a){}
        string getn() { return sta_name; }
        int get_a() { return sta_a; }
    protected:
        string sta_name;
        int sta_a;
};
void test1()
{
    stack<string> sta_ck;
    for (size_t i = 0; i < 4; i++)
    {
        string sta_name = "name" + to_string(i);
        sta_ck.push(sta_name);
    }
    while(!sta_ck.empty())
    {
        cout << sta_ck.top() << "\t";
        sta_ck.pop();
    }
    cout << endl;
    // for (size_t i = 0; i < sta_ck.size(); i++)
    // {
    // cout << sta_ck.top() << "\t";
    //     sta_ck.pop();
    // }
    
}
void test2()
{
    MyStack<Mstack> Msta_t;
    // stack<Mstack> Msta_t;
    for (size_t i = 0; i < 4; i++)
    {
        string sta_n = "temp" + to_string(i);
        Msta_t.push(Mstack(sta_n, i * 10));
    }
    while (!Msta_t.empty())
    {
        cout << Msta_t.top().getn() << "\t" << Msta_t.top().get_a()<<endl;
        Msta_t.pop();
    }
    cout << endl;
}
int main()
{
    test1();
    test2();
    getchar();
    return 0;
}