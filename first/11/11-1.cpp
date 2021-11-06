#include<iostream>
#include<array>
using namespace std;
class MM
{
    public:
    MM(string name,int age):name(name),age(age){}
    void print()
    {
        cout << name << "\t" << age << endl;
    }
    friend ostream& operator<<(ostream& out,const MM& object)
    {
        out << object.name << "\t" << object.age;
        return out;
    }

    protected:
        string name;
        int age;
};
template<class _ty,size_t size>
class Myarray
{
    public:
        Myarray()
        {
            this->pdata = new _ty[size];
        }
    public:
        // 模拟指针 迭代器
        class iterator
        {
            public:
                iterator(_ty *pmove = nullptr) : pmove(pmove){}
                void operator = (iterator object)
                {
                    this->pmove = object.pmove;
                }
                bool operator!=(iterator object)
                {
                    return this->pmove != object.pmove;//!=差点忘了
                }
                iterator operator++(int)
                {
                    this->pmove++;
                    return *this;
                }
                _ty operator*()
                {
                    return *pmove;
                }

            protected:
                _ty *pmove;
        };
    public:
        _ty& operator[](int index)
        {
            return pdata[index];
        }
        iterator begin()
        {
            return iterator(pdata);
        }
        iterator end()
        {
            return iterator(pdata + size);
        }
        _ty front()
        {
            return this->pdata[0];
        }
        _ty back()
        {
            return this->pdata[size - 1];
        }
    protected:
        _ty* pdata;
};
void testarray()
{
    array<int, 3> iArray = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        iArray[i] = i;
    }
    for(auto v:iArray)
    {
        cout << v << "\t";
    }
    cout << endl;
    // 迭代器:类的对象
    array<int, 3>::iterator iter;
    for (iter = iArray.begin(); iter != iArray.end(); iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}
void testFunction()
{
    array<string , 3> strArray = {"baby", "andy", "Lisa"};
    cout << strArray.size() << endl;
    cout << strArray.empty()<<endl;
    cout << strArray.front() << endl;
    cout << strArray.back() << endl;
    cout << strArray.begin() << endl;//首地址
    cout << strArray.end() << endl;//尾地址
    cout << *(strArray.end() - 1) << endl;
    cout << strArray.at(0) << endl;
    // swap等长交换，还有其他函数，去查文档
}
void operatorUserData()
{
    array<MM, 3> mmarray = {MM("baby", 12), MM("andy", 11), MM("kk", 23)};
    for(auto v:mmarray)
    {
        v.print();//v表示匿名对象
    }
    for (array<MM, 3>::iterator iter = mmarray.begin(); iter != mmarray.end();iter++)
    {
        iter->print();//iter对象指针
    }
    array<MM *, 2> pMM = {new MM("baby", 12), new MM("lady", 13)};
    pMM[0]->print();
    for (auto iter = mmarray.begin(); iter != mmarray.end();iter++)
    {
        // cout << iter << endl;
        cout << *iter << endl;
    }
}
void test()
{
    Myarray<int, 3> mm;
    for (int i = 0; i < 3; i++)
    {
        mm[i] = i;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << mm[i] << endl;
    }
    Myarray<int, 3>::iterator iter;
    for (iter = mm.begin(); iter != mm.end();iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
}
int main()
{
    testarray();
    testFunction();
    operatorUserData();
    test();
    getchar();
    return 0;
}
//string array类