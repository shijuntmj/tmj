// 运算符重载
// template模板
#include<iostream>
using namespace std;

template<class _TY1,class _TY2,class _TY3> 
void print(_TY1 one,_TY2 two,_TY3 three)
{
    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
}

template <class _TY1> 
_TY1 Max(_TY1 a,_TY1 b)
{
    return a > b ? a : b;
}

class MM
{
    public:
        MM(string name, int age) : name(name), age(age){};
        friend ostream &operator<<(ostream &out, MM &object);
        friend bool operator>(MM &object1,MM &object2);
        int getage()
        {
            return age;
        }
    protected:
        string name;
        int age;
};

ostream &operator<<(ostream &out, MM &object)
{
    out << object.age;
    return out;
}

bool operator>(MM &object1,MM &object2)
{
    return object1.age > object2.age;
}
int main()
{
    // 隐式调用
    cout << Max(1, 2) << endl;
    // 显示调用
    cout << Max<double>(1.1, 2.2) << endl;
    cout << Max(MM("baby", 12), MM("my", 14)).getage() << endl;
    print(1, 2, "kk");
    MM *pMM = new MM("baby", 12);
    MM *pMM1= new MM("baby1", 112);
    cout << *pMM << endl;
    cout<<operator>(*pMM, *pMM1);
    // cout << Max<MM>(*pMM, *pMM1) << endl;
    // cout << Max<MM>(MM("baby", 12), MM("my", 14)) << endl;
    getchar();
    return 0;
}  