#include<iostream>
#include<regex>
using namespace std;
//�˽�һ��������ʽ
int main()
{
    regex ref("(\\d)\\1([A-Z])+");
    string str("11AAA");
    if(regex_match(str,ref))
    {
        cout << "ƥ��	" << endl;
    }
    else
    {
        cout << "��ƥ��	" << endl;
    }
    
    system("pause");
    return 0;
}