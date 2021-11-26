#include<iostream>
#include<regex>
using namespace std;
//了解一下正则表达式
int main()
{
    regex ref("(\\d)\\1([A-Z])+");
    string str("11AAA");
    if(regex_match(str,ref))
    {
        cout << "匹配	" << endl;
    }
    else
    {
        cout << "不匹配	" << endl;
    }
    
    system("pause");
    return 0;
}