// 都可以调用时 普通函数优先于模板函数
// 类模板的特化 全部特化 局部特化
// .hpp=.h+.cpp 声明实现写在一起
// 类模板只能写在一个文件里，不能分开写成多文件
#include<iostream>
using namespace std;
template<class _ty1>
_ty1 Max(_ty1 a,_ty1 b)
{
    cout << "_ty1" << endl;
    return a > b ? a : b;
}
int Max(int a,int b)
{
    cout << "tt" << endl;
    return a > b ? a : b;
}
template<class _ty1,class _ty2>
_ty1 Max(_ty1 a,_ty2 b)
{
    cout << "kk" << endl;
    return a > b ? a : b;
}

template<class _ty1>
class Compare
{
    public:

        static bool compare(_ty1 first,_ty1 second)
        {
            cout << "原生模板" << endl;
            return first > second;
        }
};
// 完全特化
template<>
class Compare<int>
{
    public:
        static bool compare(int first,int second)
        {
            cout << "全部特化" << endl;
            return first > second;
        }
};

// 局部特化
template<class _ty1,class _ty2>
class MM
{
    public:
    static void print(_ty1 a,_ty2 b)
    {
        cout << "原生模板" << endl;
        cout << a <<"\t" <<b << endl;
    }
};
template<class _ty1>
class MM<_ty1,_ty1>
{
    public:
    static void print(_ty1 a,_ty1 b)
    {
        cout << "局部特化" << endl;
        cout << a <<"\t" <<b << endl;
    }
};
int main()
{
    Max(1, 2);
    Max(1.1, 2);

    cout << boolalpha << Compare<int>::compare(1, 2) << endl;
    cout << boolalpha << Compare<string>::compare("ab1", "ab2") << endl;

    MM<string, string>::print("ab1", "ab2");
    MM<string, int>::print("ab1", 12);
    getchar();
    return 0;
}
// 数据类型 static const string