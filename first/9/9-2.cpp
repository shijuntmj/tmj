// �麯��>���麯��>������
// �����಻�ܹ������,ֻ����ָ��
#include<iostream>
using namespace std;
class MM
{
    public:
        virtual void print() = 0;
};
int main()
{
    MM* pmm=nullptr;
    cout << sizeof(MM) << endl;
    getchar();
    return 0;
}