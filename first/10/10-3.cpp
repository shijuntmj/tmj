// 模板中带有变量
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
template <class _ty1,size_t size>//size只能是常量，不能是变量
class MM
{
    _ty1 *parray;
    public:
    MM()
    {
        parray = new _ty1[size];
    }
    _ty1& operator[](int index)
    {
        return parray[index];
    }
};
string& operator+(string& str,int& i)
{
    string p = to_string(i);
    char *p1 = str.data();
    const char *p2 = p.data();
    strcat(p1, p2);
    str = p1;
    // str(p1, sizeof(p1));
    return str;
}
int main()
{
    MM<int, 3> mm;
    //MM<int ,3> mm();
    for (int i = 0; i < 3; i++)
    {
        mm[i] = i;
        cout << mm[i] << "\t";
    }
    cout << endl;
    MM<string, 3> mm1;
    for (int i = 0; i < 3; i++)
    {
        mm1[i] = ("this is"+i);
        cout << mm1[i] << "\t";//报错
    }
    cout << endl;
    getchar();
    return 0;
}