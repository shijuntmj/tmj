#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class myInt
{
    public:
    //获取值
        myInt(int num = 0);
        int& data();
        int data1();
    //数字转字符串
        string toString();
        int operator()();
    //算数运算
        myInt operator+(const myInt& value);
        myInt operator-(const myInt& value);
        myInt operator*(const myInt& value);
        double operator/(const myInt& value);
        myInt operator%(const myInt& value);
        myInt operator=(const myInt& value);
    //++--运算符
        myInt& operator++();
        myInt operator++(int);
        myInt& operator--();
        myInt operator--(int);
    //位运算
        myInt operator&(const myInt& value);
        myInt operator|(const myInt& value);
        myInt operator^(const myInt& value);
        myInt& operator~();
        myInt operator>>(const myInt& value);
        myInt operator<<(const myInt& value);
    //逻辑运算
        bool operator&&(const myInt &value);
        bool operator||(const myInt &value);
        bool operator!();
    //特殊符号
        myInt operator-();
        myInt operator+();
        myInt* operator&();
        myInt operator*();
    //流重载
        friend ostream& operator<<(ostream &out, myInt &value);
        friend istream& operator>>(istream &in, myInt &num);
    protected:
        int m_num;
};