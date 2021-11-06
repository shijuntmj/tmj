#include<iostream>
#include<queue>
#include<deque>
using namespace std;
void test()
{
    queue<int> qp;
    for (size_t i = 0; i < 3; i++)
    {
        qp.push(i);     
    }
    while (!qp.empty())
    {
        cout << qp.front()<<"\t";
        qp.pop();
    }
    cout << endl;
}
void test1()
{
    deque<string> sqp;
    for (size_t i = 0; i < 4; i++)
    {
        string temp = "qp" + to_string(i);
        sqp.push_front(temp);
    }
    while (!sqp.empty())
    {
        cout << sqp.front() << "\t";
        sqp.pop_front();
    }
    cout << endl;
}
int main()
{
    test();
    test1();
    getchar();
    return 0;
}