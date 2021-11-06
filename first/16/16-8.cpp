#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
/*
+ make_heap:生成一个堆

+ pop_heap:出堆

+ push_heap:入堆

+ sort_heap:堆排序
*/
template<class _ty>
void print(string info,_ty data)
{
    cout << info << endl;
    for(auto v: data)
    {
        cout << v << "\t";
    }
    cout << endl;
}
int main()
{
    vector<int> a = {10, 20, 30, 40, 50, 88};
    make_heap(a.begin(), a.end());
    // sort_heap(a.begin(), a.end());会改变堆的性质
    print("d", a);
    cout << "出堆" << endl;
    while(!a.empty())
    {
        pop_heap(a.begin(), a.end());
        cout << a.back() << "\t";
        a.pop_back();
        make_heap(a.begin(), a.end());//保险起见
    }
    cout << endl;
    system("pause");
    return 0;
}