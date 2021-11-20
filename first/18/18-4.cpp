#include<iostream>
using namespace std;
//throw-try-catch
double throwp(int a,int b)
{
    if(b==0)
    {
        throw b;
    }
    if(a==1)
    {
        throw 3.12;
    }
    return a / b;
}
class excepti
{
    string info;
    public:
        excepti(string info = "") : info(info){}
        const string whati() const;
};
const string excepti::whati() const
{
    return info;
}
void test(int a,int b)
{
    if(b==0)
    {
        throw excepti("one");
    }
    if(a==0)
    {
        throw excepti("two");
    }
}
void tries(void (*func)(int a,int b),int a,int b)
{
    try
    {
        func(a, b);
    }
    catch(excepti& temp)
    {
        cout << temp.whati() << endl;
    }
}
int main()
{
    try
    {
        throwp(1, 9);
    }
    catch(int)
    {
        cout << "1" << endl;
    }
    catch(double)
    {
        cout << "double" << endl;
    }
    
    // test(1,0);
    // test(0, 19);
    tries(test, 1, 0);
    tries(test, 0, 19);
    system("pause");
    return 0;
}