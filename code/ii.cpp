#include<iostream>
using namespace std;
class Data
{
private:
    int first;
    int second;
public:
    Data(int first,int second);
    friend Data operator+(Data first, Data second);//��Ԫ��ʽ����
    Data operator-(const Data& object)//��Ա��������
    {
        return Data(this->first - object.first, this->second - object.second);
    }
    ~Data();
};

Data::Data(int first,int second)
{
    this->first = first;
    this->second = second;
}

Data operator+(Data One, Data Two)
{
    return Data(One.first + Two.first, One.second + Two.second);
}

Data::~Data()
{
}

int main()
{
    Data data1(1, 2);
    Data data2(2, 3);
    Data data3 = data1 + data2;//�Ӻ���������أ�ʵ�����Ǻ�������
    Data result = operator+(data1, data2);//���������Ϊ����
    Data data4 = data2 - data1;
    Data data5 = data2.operator-(data1);
    return 0;
}