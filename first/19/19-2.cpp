#include<iostream>
#include<regex>
using namespace std;
//ƥ��
void email_match()
{
    regex emailformat("^\\w+([-+.]\\w+)*@\\w+([-.]\\w)*\\.\\w+([-.]\\w+)*$");
    string inputemail;
    while(1)
    {
        cout << "���������ַ:";
        cin >> inputemail;
        bool result = regex_match(inputemail, emailformat);
        if(result)
        {
            cout << "����ɹ�" << endl;
            break;
        }
    }
}
//����	
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
        cout << "��׺" << result.prefix() << endl;
        cout << "��׺" << result.suffix() << endl;
    }
    //���ֵ���cout
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
    //0����ƥ��     -1:ƥ��
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