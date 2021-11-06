#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
/*
+ set_union:差集

+ set_intersection:并集

+ set_difference:保存第一个中有第二个没有的元素

+ set_symmetric_difference:对称差集
*/
using namespace std;
template<class _ty>
void print1(string info,_ty data)
{
    cout << info << endl;
    for(auto v:data)
    {
        cout << v << "\t";
    }
    cout << endl;
}
int main()
{
    vector<int> one = {1, 2, 3, 4, 5, 6};
    vector<int> two = {1, 2, 3, 8};
    vector<int> three(one.size() + two.size());
    //并集a并b
    set_union(one.begin(), one.end(), two.begin(), two.end(), three.begin());
    print1("set_union", three);
    //交集a交b
    set_intersection(one.begin(), one.end(), two.begin(), two.end(), three.begin());
    print1("set_intersection", three);
    //a-a交b
    set_difference(one.begin(), one.end(), two.begin(), two.end(), three.begin());
    print1("set_difference", three);
    //a并b-a交b
    set_symmetric_difference(one.begin(), one.end(), two.begin(), two.end(), ostream_iterator<int>(cout, "\t"));
    system("pause");
    return 0;
}