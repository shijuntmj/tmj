//函数适配器（提供固定默认参数）减少接口参数,改变参数位置
// 
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int Max(int a,int b)
{
    return a > b ? a : b;
}
class MM
{
    public:
    void print()
    {
        cout << "MM::print" << endl;
    }
    void printData(int a,int b,int c)
    {
        cout << a + b + c << endl;
    }
    protected:
};
void printInfo(int a,double b,string c)
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}
int main()
{
    // 普通函数
    int (*pMax)(int, int) = Max;
    cout<<pMax(1, 2)<<endl;
    auto pFunc = bind(Max, placeholders::_1, 10);
    cout << pFunc(13) << endl;
    cout << pFunc(1, 2) << endl;//第二个参数必须为10
    // 类的成员函数
    MM mm;
    auto pFuncMM = &MM::print;
    auto PFuncMM2 = bind(&MM::print, mm);
    PFuncMM2();
    auto pFuncMM3 = bind(&MM::printData, mm,placeholders::_1, 12, 12);
    pFuncMM3(12);
    //函数适配器在条件统计的应用
    vector<int> score = {1, 2, 3, 4, 5, 6, 7};
    int count = count_if(score.begin(), score.end(), [](int data){ return data >= 4; });
    cout << count << endl;
    count = count_if(score.begin(), score.end(),bind(greater_equal<int>(),placeholders::_1,4));
    cout<<count<<endl;
    // 函数包装器 把函数指针包装成对象
    function<void(int, double, string)> pf(printInfo);
    pf(1, 2.3, "函数打包");
    function<void(int, double)> pBindStirng(bind(printInfo, placeholders::_1, placeholders::_2, "绑定stirng"));
    pBindStirng(1, 2.3);
    function<int(int, int)> PFunMax(Max);
    cout << PFunMax(1, 2) << endl;
    function<void(double, int)> PBindString1(bind(printInfo, placeholders::_2, placeholders::_1, "调整位置"));
    PBindString1(1.2, 3);
    system("pause");
    return 0;
}