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
    //[](){}�����б������б�������
    //std�����sort ����
    //std�����functional������װ��
    //
    // ������һ������bool greater(int lv, int rv)�������Ƿ�lv > rv������ôһ��������
    // ��һ������������һȺ���֣�����һȺ�����з��������������
    

    getchar();
    return 0;
}