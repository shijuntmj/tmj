#include <functional>
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int c = 90;
    char b = 'd';
    auto v = [&a, &c]()
    { cout << a << c; };
    v();
    //[](){}捕获列表，参数列表，函数体
    //std里面的sort 排序
    //std里面的functional函数包装器
    //
    // 假如由一个函数bool greater(int lv, int rv)，返回是否lv > rv，有这么一个场景，
    // 有一个有序容器，一群数字，用这一群数字切分这个有序容器。
    

    getchar();
    return 0;
}