#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
/*
ʱ����
chrono::duration<�������ͣ�ratio<a,b>> time;//һ�������
duration����¼ʱ����
ratio<a,b>   a/b��     Ĭ��b=1;



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
//����ɾ����
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