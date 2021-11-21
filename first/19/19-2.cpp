#include<iostream>
#include<regex>
using namespace std;
//匹配
void email_match()
{
    regex emailformat("^\\w+([-+.]\\w+)*@\\w+([-.]\\w)*\\.\\w+([-.]\\w+)*$");
    string inputemail;
    while(1)
    {
        cout << "输入邮箱地址:";
        cin >> inputemail;
        bool result = regex_match(inputemail, emailformat);
        if(result)
        {
            cout << "输入成功" << endl;
            break;
        }
    }
}
//捕获	
void str_search()
{
    string a = "iloveyou123butifailed";
    smatch result;
    bool flag = regex_search(a, result, regex("\\d+"));
    if(flag)
    {
        cout << "size" << result.size() << endl;
        for (int i = 0; i < result.size();i++)
        {
            cout << result.size() << "\t";
        }
        cout << endl;
        cout << "后缀" << result.prefix() << endl;
        cout << "后缀" << result.suffix() << endl;
    }
}
int main()
{
    // email_match();
    str_search();
    system("pause");
    return 0;
}