#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;
//next_permutation����4��3��2��1������ĵط�����
//prev_permutation����1��2��3��4����С�ĵط����У�����
int main()
{
    vector<int> a1 = {1, 2, 3, 4};
    int i = 0;
    do
    {
        cout << "��" << i + 1 << "�����:";
        for(auto v:a1)
        {
            cout << v << "\t";
        }
        cout << endl;
        i++;
    } while (next_permutation(a1.begin(),a1.end()));
    vector<int> a2 = {4, 3, 2, 1};
    int i1 = 0;
    do
    {
        cout << "��" << i1 + 1 << "�����:";
        for(auto v:a2)
        {
            cout << v << "\t";
        }
        cout << endl;
        i1++;
    } while (prev_permutation(a2.begin(),a2.end()));
    system("pause");
    return 0;
}