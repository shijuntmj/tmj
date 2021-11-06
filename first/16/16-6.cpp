#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
/*
+ for_each:��������,��Χ��ÿ��Ԫ����һ��һԪ����

+ fill:��䷽ʽ��ʼ����

+ fill_n:ָ�������������

+ generate_n:����������Ľ�����������е�ÿ��ֵ

+ transform:һԪת���Ͷ�Ԫת��
*/
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    for_each(a.begin(), a.end(), [](int data){ cout << data << "\t"; });
    cout << endl;
    vector<int> b(a.size());
    fill(b.begin(), b.end(), 3);
    for_each(b.begin(), b.end(), [](int data){ cout << data << "\t"; });
    cout << endl;
    vector<int> c(a.size());
    fill_n(c.begin(), 5, 30);
    for_each(c.begin(), c.end(), [](int data){ cout << data << "\t"; });
    cout << endl;
    vector<int> d(a.size());
    generate_n(d.begin(), 2, [](){ return 12; });
    for_each(d.begin(), d.end(), [](int data){ cout << data << "\t"; });
    cout << endl;
    vector<int> e = {1, 2, 3, 4, 5, 6};
    vector<int> result(e.size());
    transform(e.begin(), e.end(), result.begin(), [](int data){ return data + 1; });
    copy(result.begin(), result.end(), ostream_iterator<int>(cout, "\t"));//��Ҫͷ�ļ�������һ������
    system("pause");
    return 0;
}