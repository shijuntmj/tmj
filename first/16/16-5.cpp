#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
+ equal:������Ԫ���Ƿ���ͬ

+ includes:�Ƿ��ǰ�����ϵ

+ lexicographical_compare:�Ƚ���������,С�ڷ���true

+ max:�����ֵ

+ max_element:�������ֵ��iterator,��һ����Χ�ڵ����ֵ,�������ֵ�ĵ�һ��ʵ���ĵ�������

+ min:����Сֵ

+ min_element:����Сֵ��iterator

+ mismatch:�ҵ���һ����ͬ��λ��,��������
*/
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 5};
    vector<int> c = {1, 2, 3, 4, 90};
    cout << boolalpha << equal(a.begin(), a.end(), b.begin()) << endl;
    cout << boolalpha << includes(a.begin(), a.end(), b.begin(), b.end()) << endl;//��������
    cout << lexicographical_compare(a.begin(), a.end(), b.begin(), b.end()) << endl;
    cout<<max(*(a.begin()+1),*(a.begin()+2))<<endl;
    cout << *max_element(a.begin(), a.end()) << endl;
    cout<<*mismatch(a.begin(), a.end(), c.begin(), c.end()).first<<endl;
    cout<<*mismatch(a.begin(), a.end(), c.begin(), c.end()).second<<endl;
    system("pause");
    return 0;
}