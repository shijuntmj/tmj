//initialier_list列表实现{}初始化
#include<iostream>
#include<vector>
#include<initializer_list>
#include<any>
using namespace std;
class MyData
{
    public:
        // MyData(int a, int b) : a(a), b(b){}
        // MyData(int a):a(a){}
        MyData(const initializer_list<int>& data):a(0),b(0)//列表数据是const属性的
        {
            for(auto v:data)
            {
                a += v;
                b -= v;
            }
        }
        void print()
        {
            cout << "a=" << a << endl;
            cout << "b=" << b << endl;
        }
    protected:
        int a=0;
        int b=0;
};
void operatorInitializer_list()
{
    initializer_list<int> object1 = {1, 2, 3};
    initializer_list<int> object2 = {1, 2, 3, 4, 5};
    for(int v:object1)
    {
        cout << v << "\t";
    }
    cout << endl;
    initializer_list<int>::iterator iter;
    for (iter = object2.begin(); iter != object2.end();iter++)
    {
        cout << *iter << "\t";
    }
    cout << endl;
    for(auto v:{1,2,34,5,6})
    {
        cout << v << "\t";
    }
    cout << endl;
}
int main()
{
    vector<int> num = {1, 2, 3, 4};
    vector<int> num1 = {1, 23, 4, 5};
    MyData object = {1, 2};
    MyData object2 = {1};
    object.print();
    object2.print();
    operatorInitializer_list();
    initializer_list<any> Doject = {1.2, "string", 12};
    // auto iter = Doject.begin();
    // cout << *(iter->_Cast<double>) << endl;
    // iter++;
    // cout << *(iter->_Cast<string>) << endl;
    // iter++;
    // cout << *(iter->_Cast<int>) << endl;
    // iter++;
    // 17标准才能用
    getchar();
    return 0;     
} 