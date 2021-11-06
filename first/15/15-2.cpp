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
    // ͬԪ�����λ�ò���
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
    //�������е����ϵ�������
    merge(array1.begin(), array1.end(), array2.begin(), array2.end(), result.begin());
    // ԭ�������������������У������ϵ�ԭ����
    inplace_merge(array3.begin(),array3.begin()+5 ,array3.end());
    printData(array3);
    printData(result);
}
void testnth_element()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    // ��n��Ԫ��ȷ��Ϊ��n��ģ�����С���������󣬱��������������
    nth_element(array.begin(), array.begin() + 5, array.end());
    printData(array);
}
void testPortition()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array1 = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    // ����ν������������������������
    partition(array.begin(), array.end(), [](int data){ return data > 5; });
    // ����ν�����������������������ң����λ�ò���
    stable_partition(array1.begin(), array1.end(), bind(Compare_int_less(), placeholders::_1, 5));
    printData(array);
    printData(array1);
}
void testpartial()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array1 = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array3(3);
    // first��middle���򣬺�������
    partial_sort(array.begin(), array.begin() + 3, array.end());
    // fisrt��middle������copy��������
    partial_sort_copy(array.begin(), array.begin() + 3, array3.begin(), array3.end());
    printData(array);
    printData(array3);
}
void testrandom()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    // ������Ҫ����
    random_shuffle(array.begin(), array.end());
    printData(array);
}
void testreverseandrotate()
{
    vector<int> array = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array1 = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    vector<int> array2(array.size());
    // ��ת
    reverse(array.begin(), array.end());
    // ��תcopy,���ı�ԭ����
    reverse_copy(array1.begin(), array1.end(), array2.begin());
    vector<int> array4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //middleǰ��Ԫ����ת������ȥ
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