// sortÅÅÐò     ·Âº¯Êý
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Sum
{
    public:
    int operator()(const int& a,const int& b) const
    {
        return a + b;
    }
};
template<class _ty>
class CompareLess
{
    public:
    bool operator()(const _ty& a,const _ty& b ) const
    {
        return a < b; 
    }
};
template<class _TY>
void print(vector<_TY> data)
{
    for(auto v:data)
    {
        cout << v << "\t";
    }
    cout << endl;
}
int main()
{
    Sum object;
    cout << object(1, 2) << endl;
    cout << object.operator()(1, 2) << endl;
    cout << Sum()(1, 2) << endl;
    vector<char> vector_data = {'q', 'w', 'e', 'r', 'a'};
    sort(vector_data.begin(), vector_data.end(), less<char>());
    print(vector_data);
    sort(vector_data.begin(), vector_data.end(), greater<char>());
    print(vector_data);
    sort(vector_data.begin(), vector_data.end(), CompareLess<int>());
    print(vector_data);
    getchar();
    return 0;
}