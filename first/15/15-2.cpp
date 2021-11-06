#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
#include<ctime>
using namespace std;
template<class _ty>
void printData(_ty object)
{
    for(auto v:object)
    {
        cout << v << "\t";
    }
    cout << endl;
}
class MM
{
    public:
        MM(int age, string name) : age(age), name(name){}
        friend ostream &operator<<(ostream &out,const MM &one)
        {
            out << one.getString();
            return out;
        }
        // ostream& operator<<(ostream& out)
        // {
        //     out << this->getAge();
        //     return out;
        // }
        int getAge()const
        {
            return age;
        }
        string getString()const
        {
            return name;
        }
    protected:
        int age;
        string name;
};
class CompareByageLess
{
    public:
    bool operator()(const MM& one,const MM& two) const
    {
        return one.getAge() < two.getAge();
    }
};
class Compare_int_less
{
    public:
        bool operator()(const int& a,const int& b)const
        {
            return a < b;
        }
};
void testSort()
{
    vector<int> array= {1, 2, 3, 4, 5, 7, 6, 8, 9, 10};
    sort(array.begin(), array.end(), greater<int>());
    printData(array);
    vector<MM> array1 = {{12, "stirng1"}, {13, "string2"}, {15, "string3"}};
    sort(array1.begin(), array1.end(), CompareByageLess());
    printData(array1);
}
void testStable_sort()
{
    // 同元素相对位置不变
    vector<MM> array1 = {{12,"stg11"}, {13, "string2"},{12, "stirng1"}, {15, "sing3"}};
    sort(array1.begin(), array1.end(),CompareByageLess());
    // stable_sort(array1.begin(), array1.end(), CompareByageLess());
    printData(array1);
}
void testMerge()
{
    vector<int> array1 = {1, 3, 5, 7, 9};
    vector<int> array2 = {2, 4, 6, 8, 10};
    vector<int> array3 = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> result(10);
    //有序序列的整合到新容器
    merge(array1.begin(), array1.end(), array2.begin(), array2.end(), result.begin());
    // 原容器（含俩段有序序列），整合到原容器
    inplace_merge(array3.begin(),array3.begin()+5 ,array3.end());
    printData(array3);
    printData(result);
}
void testnth_element()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    // 第n个元素确定为第n大的，比他小的无序置左，比他大的无序置右
    nth_element(array.begin(), array.begin() + 5, array.end());
    printData(array);
}
void testPortition()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array1 = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    // 满足谓词条件的置于左，其余置于右
    partition(array.begin(), array.end(), [](int data){ return data > 5; });
    // 满足谓词条件的置于左，其余置于右，相对位置不变
    stable_partition(array1.begin(), array1.end(), bind(Compare_int_less(), placeholders::_1, 5));
    printData(array);
    printData(array1);
}
void testpartial()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array1 = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array3(3);
    // first到middle有序，后面无序
    partial_sort(array.begin(), array.begin() + 3, array.end());
    // fisrt到middle有序并且copy到新容器
    partial_sort_copy(array.begin(), array.begin() + 3, array3.begin(), array3.end());
    printData(array);
    printData(array3);
}
void testrandom()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    // 乱序需要种子
    random_shuffle(array.begin(), array.end());
    printData(array);
}
void testreverseandrotate()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array1 = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array2(array.size());
    // 反转
    reverse(array.begin(), array.end());
    // 反转copy,不改变原容器
    reverse_copy(array1.begin(), array1.end(), array2.begin());
    vector<int> array4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //middle前面元素旋转到后面去
    rotate(array4.begin(), array4.begin() + 4, array4.end());
    array2.resize(array4.size());
    rotate_copy(array4.begin(), array4.begin() + 4, array4.end(), array2.begin());
    printData(array);
    printData(array2);
    printData(array4);
    printData(array2);
}
int main()
{
    srand((unsigned int)time(nullptr));
    // testSort();
    testStable_sort();
    testMerge();
    testnth_element();
    testPortition();
    testpartial();
    testrandom();
    testreverseandrotate();
    system("pause");
    return 0;
}