// 类模板嵌套
// MM内涵info.MM的数据成员一个是info类<姓名，编号，年龄>,另一个是info类<三围>;
// 重载<<实现打印
#include<iostream>
using namespace std;
template<class _Ty1,class _Ty2>
class MM
{
    public:
    MM(_Ty1 one,_Ty2 two):one(one),two(two){}
    void print()
    {
        cout << one << endl;
        cout<<two << endl;
    }
    protected:
        _Ty1 one;
        _Ty2 two;
};

template <class _ty1,class _ty2,class _ty3>
class Info
{
    public:
        Info(_ty1 first, _ty2 second, _ty3 third) : first(first), second(second), third(third){};
        friend ostream &operator<<(ostream &out,const Info<_ty1, _ty2, _ty3> &object);//declare a non-template function
        _ty1 getfirst()
        {
            return first;
        }
        _ty2 getsecond()
        {
            return second;
        }
        _ty3 getthird()
        {
            return third;
        }
    protected:
        _ty1 first;
        _ty2 second;
        _ty3 third;
};
template <class _ty1, class _ty2, class _ty3>
ostream &operator<<(ostream &out, Info<_ty1, _ty2, _ty3> &object)
{
    out << object.getfirst() <<"\t"<< object.getsecond() <<"\t"<< object.getthird();//提供接口
    return out;
}
int main()
{
    Info<string, int, int> mminfo = {"baby", 12, 12};
    Info<float, float, float> mmScore = {200.0f, 10.0f, 299.0f};
    MM<Info<string, int, int>, Info<float, float, float>> *pMM = new MM<Info<string, int, int>, Info<float, float, float>>(mminfo, mmScore);
    //using语法
    using MMty = MM<Info<string, int, int>, Info<float, float, float>>;
    using Infoty1 = Info<string, int, int>;
    using Infoty2 = Info<float, float, float>;
    MMty *pmm = new MMty(Infoty1("baby", 12, 12), Infoty2(200.0f, 10.0f, 299.0f));
    pmm->print();


    getchar();
    return 0;
}