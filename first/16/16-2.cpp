#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>
#include<array>
#include<list>
using namespace std;
template<class _ty>
void printData(string info,_ty data)
{
    cout << info<<"\t";
    for(auto v:data)
    {
        cout << v << "\t";
    }
    cout << endl;
}
class Predicate1
{
    public:
        bool operator()(int data)
        {
            return data % 2 == 0;
        }
};
int main()
{
    //copy从头部开始赋值
    array<int, 10> arrayData = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vecData(arrayData.size());//必须确定长度，不然copy会报错
    copy(arrayData.begin(), arrayData.end(), vecData.begin());//先copy1
    printData("copy:", vecData);
    // copy(vecData.begin(), vecData.end(), ostreambuf_iterator<int,char>(out, '\t'));
    cout << endl;
    //copy_backward：从尾部开始赋值
    vector<int> vecData1(arrayData.size());
    copy_backward(arrayData.begin(), arrayData.end(), vecData1.end());//先copy10
    printData("copy_backward:", vecData1);
    //remove:伪删除
    auto rs=remove(vecData1.begin(), vecData1.end(), 10);
    if(rs==vecData1.end())
    {
        cout << "没有找到";
    }
    else
    {
        cout << "删除成功";
    }
    cout << *rs << endl;
    cout << "size" << vecData1.size() << endl;
    printData("remove:", vecData1);
    //remove_copy删除元素，后面平移
    vector<int> temp = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> result(temp.size() - 1);
    remove_copy(temp.begin(), temp.end(), result.begin(), 4);
    printData("remove_copy", result);
    //remove_if:满足条件伪删除
    vector<int> a1 = {10, 8, 9, 6, 7, 4, 5, 2, 3, 1};
    vector<int> a2 = {10, 8, 9, 6, 7, 4, 5, 2, 3, 1};
    vector<int> result1(a1.size() - 5);
    remove_if(a1.begin(), a1.end(), [](int data){ return data % 2 == 0; });
    remove_copy_if(a2.begin(), a2.end(), result1.begin(), [](int data){ return data % 2 == 0; } /*Predicate1()*/ );
    printData("remove_if:", a1);
    printData("remove_copy_if:", result1);
    //replace    replace_copy
    vector<int> a3 = {10, 8, 9, 6, 7, 4, 5, 2, 3, 1};
    replace(a3.begin(), a3.end(), 5, 500);
    printData("replace:", a3);
    //replace_if replace_copy_if
    vector<int> a4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    replace_if(a4.begin(), a4.end(), Predicate1(), 0);
    printData("replace_if:", a4);
    //iter_swap
    list<int> sData = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    auto iter = sData.end();
    advance(iter, -1);
    iter_swap(iter, sData.begin());
    printData("iter_swap:", sData);
    //swap:交换容器
    vector<int> b1 = {1, 2, 3};
    vector<int> b2 = {1, 2, 3, 4, 5, 6, 7};
    swap(b1, b2);
    printData("b1:", b1);
    printData("b2", b2);
    //区间交换
    vector<int> c1 = {4, 5, 6};
    vector<int> c2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    swap_ranges(c1.begin(),c1.end(),c2.begin());
    printData("c1:", c1);
    printData("c2:", c2);
    //unique
    vector<int> d1 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    unique(d1.begin(), d1.end());
    printData("d1:", d1);
    //unique_copy
    // vector<int> d2 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5};
    // vector<int> my(5);
    // unique_copy(d1.begin(),d1.end(),my.begin());
    // printData("my", my);
    system("pause");
    return 0;
}