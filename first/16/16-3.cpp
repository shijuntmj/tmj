#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;
//next_permutation最终4，3，2，1，往大的地方排列
//prev_permutation最终1，2，3，4，往小的地方排列，正常
int main()
{
    vector<int> a1 = {1, 2, 3, 4};
    int i = 0;
    do
    {
        cout << "第" << i + 1 << "种组合:";
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
        cout << "第" << i1 + 1 << "种组合:";
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