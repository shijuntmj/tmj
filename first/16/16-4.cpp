#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<array>
#include<numeric>//算数类
//    accumulate总和    partial_sum{sum序列}     inner_product内积   adjacent_difference()领接差
//    ostream_iterator也是一个容器

using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << accumulate(a.begin(), a.end(), 0) << endl;


    vector<int> result(a.size());
    partial_sum(a.begin(), a.end(), result.begin());
    for(int v:result)
    {
        cout << v << "\t";
    }
    cout << endl;


    vector<int> b1 = {1, 2, 3, 4, 5};
    vector<int> b2 = {1, 2, 3, 4, 5};
    cout << inner_product(b1.begin(), b1.end(), b2.begin(),0) << endl;
 
    adjacent_difference(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    system("pause");
    return 0;
}