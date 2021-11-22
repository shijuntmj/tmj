#include<iostream>
#include<chrono>
#include<thread>
#include<iomanip>
using namespace std;
/*
ʱ��
system_clock��ȡϵͳʱ��,����һ��ʱ���������time_point��to_time_t����ת����from_time_t
steady_clock���
high_resolution_clock�߾���ʱ�ӡ���system_clock


*/
void test1()
{
    chrono::system_clock::time_point result=chrono::system_clock::now();//��ȡ��ǰʱ���
    time_t mytime= chrono::system_clock::to_time_t(result);//ת��Ϊtime_t
    cout << ctime(&mytime) << endl;//��ӡ
    tm *p = localtime(&mytime);//����һ��tm�ṹ��ָ��
    cout << "��ʽ����ӡʱ��:" << put_time(p, "%Y-%m-%d %x %H:%M:%S") << endl;
    cout << "��1970�ж�����" << result.time_since_epoch().count() << endl;

}
void test2()//ʱ����
{
    chrono::steady_clock::time_point start = chrono::steady_clock::now();
    int i = 0;
    while (i<100)//nsΪĬ�ϵ�λ
    {
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        chrono::steady_clock::duration dur = end - start;
        cout << "��ʱ��" << dur.count() <<"ns"<< endl;
        i++;
    }
    while (i<1000)//s����λ
    {
        chrono::steady_clock::time_point end = chrono::steady_clock::now();
        chrono::duration<double,ratio<1,1>> dur = end - start;
        cout << "��ʱ��" << dur.count() <<"s"<< endl;
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