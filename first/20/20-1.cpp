#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
/*
时间间隔
chrono::duration<返回类型，ratio<a,b>> time;//一个类对象
duration：记录时间间隔
ratio<a,b>   a/b秒     默认b=1;



    /// nanoseconds
    typedef duration<int64_t, nano> 	    nanoseconds;

    /// microseconds
    typedef duration<int64_t, micro> 	    microseconds;

    /// milliseconds
    typedef duration<int64_t, milli> 	    milliseconds;

    /// seconds
    typedef duration<int64_t> 		    seconds;

    /// minutes
    typedef duration<int64_t, ratio< 60>>   minutes;

    /// hours
    typedef duration<int64_t, ratio<3600>>  hours;

    this_thread::sleep_for(1s) h min s ms us ns
*/
//类中删除了
// void test1()
// {
//     this_thread::
// }

void test1()
{

}
int main()
{
    chrono::duration<int, ratio<1>> sec;
    chrono::nanoseconds ns(1);

    system("pause");
    return 0;
}