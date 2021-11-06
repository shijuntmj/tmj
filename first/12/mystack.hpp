#include<iostream>
#include<vector>
using namespace std;
template<class _ty>
class MyStack
{
    public:
        MyStack(){}
        void push(_ty data) { mem.push_back(data); }
        void pop() { mem.pop_back(); };
        // void pop() { mem.erase(mem.end()-1); }//´«µØÖ·
        size_t size() { return mem.size(); }
        bool empty() { return mem.empty(); }
        _ty top() { return *(mem.end() - 1); }
    protected:
        vector<_ty> mem;
};