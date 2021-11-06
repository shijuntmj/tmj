#include<iostream>
using namespace std;
int main()
{
    char a = 'a';
    int b = static_cast<char>(a);//正确，将char型数据转换成int型数据
    
    double *c = new double;
    void *d = static_cast<void*>(c);//正确，将double指针转换成void指针
    
    int e = 10;
    const int f = static_cast<const int>(e);//正确，将int型数据转换成const int型数据
    
    const int g = 20;
    int *h = const_cast<int*>(&g);//编译错误，static_cast不能转换掉g的const属性

    return 0;
}