#include<iostream>
using namespace std;
class MM{
};
//auto
//decltype��ȡ���ͣ����عؼ���
//typeid(a).name()��ȡa�����ͣ������ַ���
int main()
{
    int a = 1;
    double b = 0;
    decltype(a) c=1;
    cout << c << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(MM()).name() << endl;
    system("pause");
    return 0;
}