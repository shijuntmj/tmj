#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> num1 = {1, 2, 3, 4, 5};
    // 四个迭代器
    vector<int>::iterator iter1 = num1.begin();
    vector<int>::const_iterator iter2 = num1.cbegin();
    vector<int>::reverse_iterator iter3 = num1.rbegin();
    vector<int>::const_reverse_iterator iter4 = num1.crbegin();
    // 三个函数
    cout << distance(num1.begin(),num1.end())<<endl;
    advance(iter1, 2);
    cout << *iter1 << endl;
    iter_swap(num1.begin(), num1.end() - 1);
    for(int v:num1)
    {
        cout << v << "\t";
    }
    // 输出
    ostreambuf_iterator<char> iter8(cout);
    iter8 = 'u';
    string str = "iloveyou";
    copy(str.begin(), str.end(), ostreambuf_iterator<char>(cout));
    // 输入	
    istream_iterator<int> endofstream;
    istream_iterator<int> inputer(cin);
    vector<int> inputData;
    while(inputer!=endofstream)
    {
        inputData.push_back(*inputer);
        inputer++;
    }
    for(auto v:inputData)
    {
        cout << v << "\t";
    }
    cout << endl;
    system("pause");
    return 0; 
}