#include<iostream>
#include<chrono>
#include<thread>
#include<iomanip>
using namespace std;
/*
时钟
system_clock获取系统时间,返回一个时间戳（类型time_point）to_time_t类型转换，from_time_t
steady_clock秒表
high_resolution_clock高精度时钟》》system_clock


*/
void test1()
{
    chrono::system_clock::time_point result=chrono::system_clock::now();//获取当前时间戳
    time_t mytime= chrono::system_clock::to_time_t(result);//转化为time_t
    cout << ctime(&mytime) << endl;//打印
    tm *p = localtime(&mytime);//返回一个tm结构体指针
    cout << "格式化打印时间:" << put_time(p, "%Y-%m-%d %x %H:%M:%S") << endl;
    cout << "离1970有多少秒" << result.time_since_epoch().count() << endl;

}
void test2()//时间间隔
{
    chrono::steady_clock::time_point start = chrono::steady_clock::now();
    int i = 0;
    while (i<100)//ns为默认单位
    {
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        chrono::steady_clock::duration dur = end - start;
        cout << "耗时间" << dur.count() <<"ns"<< endl;
        i++;
    }
    while (i<1000)//s做单位
    {
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        chrono::duration<double,ratio<1,1>> dur = end - start;
        cout << "耗时间" << dur.count() <<"s"<< endl;
        i++;
    }
    
}

int main()
{
    // chrono::system_clock::now();
    // test1();
    test2();
    system("pause");
    return 0;
}