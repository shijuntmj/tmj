#include"myInt.h"
#include<string>
// ��ȡֵ
myInt::myInt(int num)//���ﲻҪ�ض���
{
    this->m_num = num;
}
int& myInt::data()
{
    return m_num;
}
int myInt::data1()
{
    return m_num;
}
// ����ת�ַ���
string myInt::toString()
{
    return to_string(m_num);
}
int myInt::operator()()//��������
{
    return m_num;
}
// ��������
myInt myInt::operator+(const myInt& value)//����myInt���Ϳ��Լ�������
{
    return myInt(this->m_num + value.m_num);
}
myInt myInt::operator-(const myInt& value)
{
    return myInt(this->m_num - value.m_num);
}
myInt myInt::operator*(const myInt& value)
{
    return myInt(this->m_num + value.m_num);
}
double myInt::operator/(const myInt& value)
{
    return (this->m_num / value.m_num);
}
myInt myInt::operator%(const myInt& value)
{
    return myInt(this->m_num % value.m_num);
}
myInt myInt::operator=(const myInt& value)
{
    this->m_num = value.m_num;
    return *this;
}
//++--�����
myInt& myInt::operator++()
{
    this->m_num++;
    return *this;
}
myInt myInt::operator++(int)
{
    return myInt(this->m_num++);
}
myInt& myInt::operator--()
{
    this->m_num--;
    return *this;
}
myInt myInt::operator--(int)
{
    return myInt(this->m_num--);
}
//λ����
myInt myInt::operator&(const myInt& value)
{
    return myInt(this->m_num & value.m_num);
}
myInt myInt::operator|(const myInt& value)
{
    return myInt(this->m_num | value.m_num);
}
myInt myInt::operator^(const myInt& value)
{
    return myInt(this->m_num ^ value.m_num);
}
myInt& myInt::operator~()
{
    m_num=~m_num;
    return *this;
}
myInt myInt::operator>>(const myInt& value)
{
    return myInt(this->m_num >> value.m_num);
}
myInt myInt::operator<<(const myInt& value)
{
    return myInt(this->m_num << value.m_num);
}
//�߼������
bool myInt::operator&&(const myInt &value)
{
    return this->m_num && value.m_num;
}
bool myInt::operator||(const myInt &value)
{
    return this->m_num || value.m_num;
}
bool myInt::operator!()
{
    return (!this->m_num);
}
//�������
myInt myInt::operator-()
{
    return -this->m_num;
}
myInt myInt::operator+()
{
    return this->m_num;
}
myInt* myInt::operator&()
{
    return this;
}
myInt myInt::operator*()
{
    return *this;
}
// 
ostream& operator<<(ostream &out, myInt &value)//��Ԫ��������Ҫ��������
{
    out << value.m_num;
    return out;
}
istream& operator>>(istream &in, myInt &value)
{
    in >> value.m_num;
    return in;
}