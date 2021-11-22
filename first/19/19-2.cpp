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
    //数字迭代cout
    regex rule("\\d+");
    sregex_iterator pos(a.begin(), a.end(), rule);
    sregex_iterator end;
    while (pos!=end)
    {
        cout << pos->str() << "\t";
        pos++;
    }
    cout << endl;
    //sregex_token_iterator(begin,end,regex,int)
    //0：不匹配     -1:匹配
    string str = "rtyui178uqihd";
    regex rule1("\\d+");
    sregex_token_iterator pos1(str.begin(), str.end(), rule1, -1);
    sregex_token_iterator qend;
    while (pos1!=qend)
    {
        cout << pos1->str() << "\t";
        pos1++;
    }
    cout << endl;
}

int main()
{
    // email_match();
    str_search();
    system("pause");
    return 0;
}