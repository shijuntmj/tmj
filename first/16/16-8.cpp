#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
/*
+ make_heap:����һ����

+ pop_heap:����

+ push_heap:���

+ sort_heap:������
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
    // sort_heap(a.begin(), a.end());��ı�ѵ�����
    print("d", a);
    cout << "����" << endl;
    while(!a.empty())
    {
        pop_heap(a.begin(), a.end());
        cout << a.back() << "\t";
        a.pop_back();
        make_heap(a.begin(), a.end());//�������
    }
    cout << endl;
    system("pause");
    return 0;
}