#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
+ equal:两容器元素是否都相同

+ includes:是否是包含关系

+ lexicographical_compare:比较两个序列,小于返回true

+ max:求最大值

+ max_element:返回最大值的iterator,求一个范围内的最大值,引用最大值的第一个实例的迭代器。

+ min:求最小值

+ min_element:求最小值的iterator

+ mismatch:找到第一个不同的位置,返回数对
*/
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 5};
    vector<int> c = {1, 2, 3, 4, 90};
    cout << boolalpha << equal(a.begin(), a.end(), b.begin()) << endl;
    cout << boolalpha << includes(a.begin(), a.end(), b.begin(), b.end()) << endl;//必须有序
    cout << lexicographical_compare(a.begin(), a.end(), b.begin(), b.end()) << endl;
    cout<<max(*(a.begin()+1),*(a.begin()+2))<<endl;
    cout << *max_element(a.begin(), a.end()) << endl;
    cout<<*mismatch(a.begin(), a.end(), c.begin(), c.end()).first<<endl;
    cout<<*mismatch(a.begin(), a.end(), c.begin(), c.end()).second<<endl;
    system("pause");
    return 0;
}