//重载运算符++，使之可以完成类中money++
//重载运算符—--，使之可以完成字符串尾部或者头部删除字符
//时间自动转换_h，小时转化为秒
#include<iostream>
using namespace std;
class MM
{
    public:
        MM(string name, int money) : name(name), money(money){};
        void print();
        MM operator++();
        MM operator++(int);
    protected:
        string name;
        int money;
};

void MM::print()
{
    cout << this->name <<"\t"<< this->money << endl;
}

MM MM::operator++()
{
    ++this->money;
    return *this;
}
MM MM::operator++(int)//标记为后置，正常为前置
{
    return MM(this->name, this->money++);
}

string operator--(string& str1)
{
    char *pstr = const_cast<char *>(str1.c_str());//去掉const属性
    pstr++;
    str1 = pstr;
    return str1;
}
string operator--(string &str1, int)
{
    str1.pop_back();
    return str1;
}
unsigned long long operator""_h (unsigned long long num)
{
    return (num * 3600);
}
void printD(unsigned long long num)
{
    cout << num << endl;
}
int main()
{
    MM mm1("mm1", 19);
    (++mm1).print();
    (mm1++).print();
    string str1="wmkkl";
    cout << str1-- << endl;
    cout << --str1 << endl;
    printD(1_h);
    cout << 3_h << endl;
    while(1){
    };
    return 0;
}