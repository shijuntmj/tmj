#include<iostream>
using namespace std;
int main()
{
    char a = 'a';
    int b = static_cast<char>(a);//��ȷ����char������ת����int������
    
    double *c = new double;
    void *d = static_cast<void*>(c);//��ȷ����doubleָ��ת����voidָ��
    
    int e = 10;
    const int f = static_cast<const int>(e);//��ȷ����int������ת����const int������
    
    const int g = 20;
    int *h = const_cast<int*>(&g);//�������static_cast����ת����g��const����

    return 0;
}