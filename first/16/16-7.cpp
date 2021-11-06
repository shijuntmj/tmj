#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iterator>
/*
+ set_union:�

+ set_intersection:����

+ set_difference:�����һ�����еڶ���û�е�Ԫ��

+ set_symmetric_difference:�ԳƲ
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
    //����a��b
    set_union(one.begin(), one.end(), two.begin(), two.end(), three.begin());
    print1("set_union", three);
    //����a��b
    set_intersection(one.begin(), one.end(), two.begin(), two.end(), three.begin());
    print1("set_intersection", three);
    //a-a��b
    set_difference(one.begin(), one.end(), two.begin(), two.end(), three.begin());
    print1("set_difference", three);
    //a��b-a��b
    set_symmetric_difference(one.begin(), one.end(), two.begin(), two.end(), ostream_iterator<int>(cout, "\t"));
    system("pause");
    return 0;
}