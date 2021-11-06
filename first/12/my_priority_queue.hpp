#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;
template<class _Ty,class _Container=vector<_Ty>,class _Pr=less<_Ty>>
class My_priority_queue
{
    public:
        My_priority_queue()=default;
        void push(_Ty data){
            mem.push_back(data);
            sort(mem.begin(), mem.end(), _Pr());
        }
        void pop(){
            mem.erase(mem.begin());
        }
        const _Ty& top(){
            return mem.front();
        }
        bool empty() const{
            return mem.empty();
        }
        int size(){
            return mem.size();
        }
    protected:
        _Container mem;
};
