#include <chrono>
#include <iostream>
using namespace std;
template <class Duration>
//打印函数
void print_ms(const chrono::time_point<chrono::high_resolution_clock, Duration> time_point)
{
    cout << time_point.time_since_epoch().count() << "ms" << endl;
}
//时间类型转换duration_cast<>()
void test()
{
    auto start = chrono::high_resolution_clock::now();
    _sleep(1);
    auto end = chrono::high_resolution_clock::now();
    auto dtime = end - start;
    // chrono::milliseconds dtime=chrono::duration_cast<chrono::milliseconds>(end-start);
    cout << "耗时间：" << dtime.count() << endl;
}
//时间类型转换time_point_cast
void test1()
{
    //秒到毫秒，不存在精度丢失
    using TimeMS = chrono::time_point<chrono::high_resolution_clock, chrono::milliseconds>;
    TimeMS time_point_sec(chrono::seconds(6));
    TimeMS time_point_ms(time_point_sec);
    print_ms(time_point_ms);
    //毫秒到秒存在精度丢失
    time_point_ms = TimeMS(chrono::milliseconds(2345));
    using TimeSec = chrono::time_point<chrono::high_resolution_clock, chrono::seconds>;
    // TimeSec time_sec(time_point_ms);
    TimeSec time_sec;
    time_sec = chrono::time_point_cast<chrono::seconds>(time_point_ms);
    print_ms(time_sec);
}
int main()
{
    test1();
    system("pause");
    return 0;
}