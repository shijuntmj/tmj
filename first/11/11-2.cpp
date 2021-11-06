#include<iostream>
#include<vector>
using namespace std;
class MM
{
    public:
        MM(){}
        MM(string name, int age) : name(name), age(age){}
        friend istream& operator>>(istream& in,MM& object)
        {
            in >> object.name >> object.age;
            return in;
        }
        friend ostream& operator<<(ostream& out,MM& object)
        {
            out << object.name << "\t" << object.age << endl;
            return out;
        }
    protected:
        string name;
        int age;
};
void test()
{
    vector<int> mm = {1, 2, 3, 4};
    // 遍历 3种方法 下标 auto 迭代器
    for(auto v:mm)
    {
        cout << v << "\t";
    }
    cout << endl;
    for (int i = 0; i < mm.size();i++)
    {
        cout << mm[i] << "\t";
    }
    cout << endl;
    vector<int>::iterator iter;
    for (iter = mm.begin(); iter != mm.end();iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
    // push_back 尾插法
    vector<string> mm1(3);
    string str = "baby";
    for (int i = 0; i < 3;i++)
    {
        mm1[i] = str + to_string(i);
    }
    for (int i = 0; i < 3;i++)
    {
        cout << mm1[i] << "\t";
    }
    cout << endl;
    mm1.push_back("dog");
    vector<int> test(3);
    test.push_back(4);
    for(auto v:test)
    {
        cout << v << "\t";
    }
    cout << endl;
    vector<string> str1;
    for (int i = 0; i < 3;i++)
    {
        string temp;
        cin >> temp;
        str1.push_back(temp);
    }
    for(auto v:str1)
    {
        cout << v << "\t";
    }
    cout << endl;
    // assign 赋值
    int array[3]={1,2,3};
    vector<int> dataNum;
    dataNum.assign(array, array + 3);
    for(auto v:dataNum)
    {
        cout << v << "\t";
    }
    cout << endl;
}
void Function()
{
    vector<int> iArray = {1, 2, 3, 4 , 5, 6, 7};
    cout << *iArray.data() << endl;
    // 删除
    auto iter = iArray.begin();
    for (; iter != iArray.end();iter++)
    {
        if(*iter==4)
        {
            break;
        } 
    }
    iArray.erase(iter);
    cout << iArray.at(3) << endl;
    // 去重算法
    vector<int> dataNum1 = {1, 2, 3, 4, 4, 4, 4, 5};
    for (auto dIter = dataNum1.begin(); dIter != dataNum1.end();)
    {
        if(*dIter==4)
        {
            dataNum1.erase(dIter);
        }
        else
        {
            dIter++;
        }
    }
    for (auto v : dataNum1)
    {
        cout << v << "\t";
    }
    cout << endl;
}
void testStudent()
{
    vector<MM> mmArray;
    MM mm;
    while(1)
    {
        cout << "输入name,age" << endl;
        cin >> mm;
        mmArray.push_back(mm);
        char userkey = 0;
        cout << "是否继续？" << endl;
        cin >> userkey;
        if(userkey=='N'||userkey=='n')
        {
            break;
        }
    }
    cout<<"name"<<"\t"<<"age"<<endl;
    for(auto v:mmArray)
    {
        cout << v;
    }
    cout << endl;
}
int main()
{
    testStudent();
    Function();
    test();
    getchar();
    return 0;
}