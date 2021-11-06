#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 6};
    vector<int> Num;
    Num.assign(array,array+10);//fun1
    // 查找元素，返回第一个迭代器
    auto iter = find(Num.begin(), Num.end(), 8);//fun2
    if(iter==Num.end())
    {
        cout << "未找到" << endl;
    }
    else
    {
        cout << *iter << endl;
    }
    //查找满足条件元素，返回第一个迭代器
    auto iter1 = find_if(Num.begin(), Num.end(), [](int data){ return data > 7; });//fun3
    cout << *iter1 << endl;
    //查找第一个交集元素，返回第一个迭代器
    int temp[2] = {4, 5};
    cout << *find_first_of(Num.begin(), Num.end(), temp, temp + 2) << endl;//fun4
    //查找重复元素，返回第一个迭代器
    int array1[5] = {1, 2, 3, 4, 4};
    cout << *adjacent_find(array1, array1 + 5) << endl;
    // 查找重复的一段元素，返回第一个迭代器
    int temp1[3] = {1, 2, 3};
    cout << *search(Num.begin(), Num.end(), temp1, temp1 + 3) << endl;
    //查找出现n次的元素
    int array2[8] = {1, 2, 2, 3, 3, 3, 2, 4};
    cout << *search_n(array2, array2+8, 3/*n*/, 3) << endl;
    // 计数 条件计数 比较
    cout << count(array2, array2 + 8, 3) << endl;
    cout << count_if(array2, array2 + 8, [](int a){ return a > 2; })<<endl;
    cout << boolalpha << equal(temp1, temp1 + 3, array1,array1+5)<<endl;
    // 排序加二分查找,返回一个bool类型
    int array3[10] = {1, 2, 3, 9, 8, 7, 5, 6, 4, 10};
    sort(array3, array3 + 10);
    for(auto v:array3)
    {
        cout << v << "\t";
    }
    cout << endl;
    cout << boolalpha << binary_search(array3, array3 + 10, 4) << endl;
    // 查找大于，返回迭代器
    cout << *upper_bound(array3, array3 + 10, 4)<<endl;
    // 查找大于等于，返回迭代器
    cout << *lower_bound(array3, array3 + 10, 4) << endl;
    // 查找<大于等于,等于>,返回值是一个数对
    cout << *equal_range(array3, array3 + 10, 4).first << endl;
    cout << *equal_range(array3, array3 + 10, 4).second << endl;
    system("pause");
    return 0;
}