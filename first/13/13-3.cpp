// set集合：有序输出，元素互异
// multiset:有序输出，元素允许重复
// vector数据输入set
// 自定义类型
#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<array>
using namespace std;
class MM
{
    public:
    MM(string name,int num):name(name),num(num){}
    string getName() const
    {
        return name;
    }
    int getNum() const  
    {
        return num;
    }
    // bool operator<(const MM& one) const
    // {
    //     return this->num < one.num;
    // }
    // 用仿函数代替
    protected:
        string name;
        int num;
};
//仿函数
class compareLessByName
{
    public:
    bool operator()(const MM& one,const MM& two) const
    {
        return one.getName() < two.getName();
    }
    protected:
};
class compareGreaterByName
{
    public:
    bool operator()(const MM& one,const MM& two) const
    {
        return one.getName() > two.getName();
    }
    protected:
};
class compareLessByNum
{
    public:
    bool operator()(const MM& one,const MM& two) const 
    {
        return one.getNum() < two.getNum();
    }
    protected:
};
class comparegreaterByNum
{
    public:
    bool operator()(const MM& one,const MM& two) const 
    {
        return one.getNum() > two.getNum();
    }
    protected:
};
void vectortoset(set<int,greater<int>>& num1,vector<int> num2)
{
    for(int v:num2)
    {
        num1.insert(v);
    }
}
void test()
{
    set<int> num = {1, 2, 2, 3, 4, 5};
    // set<int, greater<int>> num = {1, 2, 2, 3, 4, 5};
    for(int v:num)
    {
        cout << v << "\t";
    }
    cout << endl;
    num.insert(6);
    for (auto iter = num.begin(); iter != num.end();iter++)
    {
        cout << *iter <<"\t";
    }
    cout << endl;
}
void test1()
{
    set<int,greater<int>> num1;
    vector<int> num2 = {1, 2, 3, 4, 5};
    vectortoset(num1,num2);
    for (set<int>::iterator iter = num1.begin(); iter != num1.end();iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
} 
void test3()
{
    set<MM, compareLessByName>  num1;
    MM array[3] = {MM("mm1", 1001), MM("mm2", 1009), MM("mm3", 220)};
    for(MM v:array)
    {
        num1.insert(v);
    }
    // for (size_t i = 0; i < 3; i++)
    // {
    //     num1.insert(array[i]);
    // }
    // 等效上面
    for(auto v:num1)
    {
        cout << v.getName() <<"\t"<< v.getNum() << endl;
    }
}
int main()
{
    test();
    test1();
    test3();
    getchar();
    return 0;
}