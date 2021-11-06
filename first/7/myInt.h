#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class myInt
{
    public:
    //��ȡֵ
        myInt(int num = 0);
        int& data();
        int data1();
    //����ת�ַ���
        string toString();
        int operator()();
    //��������
        myInt operator+(const myInt& value);
        myInt operator-(const myInt& value);
        myInt operator*(const myInt& value);
        double operator/(const myInt& value);
        myInt operator%(const myInt& value);
        myInt operator=(const myInt& value);
    //++--�����
        myInt& operator++();
        myInt operator++(int);
        myInt& operator--();
        myInt operator--(int);
    //λ����
        myInt operator&(const myInt& value);
        myInt operator|(const myInt& value);
        myInt operator^(const myInt& value);
        myInt& operator~();
        myInt operator>>(const myInt& value);
        myInt operator<<(const myInt& value);
    //�߼�����
        bool operator&&(const myInt &value);
        bool operator||(const myInt &value);
        bool operator!();
    //�������
        myInt operator-();
        myInt operator+();
        myInt* operator&();
        myInt operator*();
    //������
        friend ostream& operator<<(ostream &out, myInt &value);
        friend istream& operator>>(istream &in, myInt &num);
    protected:
        int m_num;
};