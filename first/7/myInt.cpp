#include"myInt.h"
#include<string>
// 获取值
myInt::myInt(int num)//这里不要重定义
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
// 数字转字符串
string myInt::toString()
{
    return to_string(m_num);
}
int myInt::operator()()//重载括号
{
    return m_num;
}
// 算数运算
myInt myInt::operator+(const myInt& value)//返回myInt类型可以继续操作
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
//++--运算符
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
//位运算
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
//逻辑运算符
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
//特殊符号
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
ostream& operator<<(ostream &out, myInt &value)//友元函数不需要类域限制
{
    out << value.m_num;
    return out;
}
istream& operator>>(istream &in, myInt &value)
{
    in >> value.m_num;
    return in;
}