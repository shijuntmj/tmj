// �����Ե���ʱ ��ͨ����������ģ�庯��
// ��ģ����ػ� ȫ���ػ� �ֲ��ػ�
// .hpp=.h+.cpp ����ʵ��д��һ��
// ��ģ��ֻ��д��һ���ļ�����ֿܷ�д�ɶ��ļ�
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
            cout << "ԭ��ģ��" << endl;
            return first > second;
        }
};
// ��ȫ�ػ�
template<>
class Compare<int>
{
    public:
        static bool compare(int first,int second)
        {
            cout << "ȫ���ػ�" << endl;
            return first > second;
        }
};

// �ֲ��ػ�
template<class _ty1,class _ty2>
class MM
{
    public:
    static void print(_ty1 a,_ty2 b)
    {
        cout << "ԭ��ģ��" << endl;
        cout << a <<"\t" <<b << endl;
    }
};
template<class _ty1>
class MM<_ty1,_ty1>
{
    public:
    static void print(_ty1 a,_ty1 b)
    {
        cout << "�ֲ��ػ�" << endl;
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
// �������� static const string