#include<iostream>
#include<regex>
using namespace std;
//�����滻
void testReplace()//��string�������滻
{
    string str = "iloveyou13imissyou14";
    regex reg("\\d+");
    cout << regex_replace(str, reg, "8888") << endl;
    cout << str << endl;
    //ֻ�滻�״�
    cout << "��һ��ƥ�䵽��" << regex_replace(str, reg, "8888", regex_constants::format_first_only) << endl;
    //��������ƥ���
    cout << "��������ƥ���" << regex_replace(str, reg, "8888", regex_constants::format_no_copy) << endl;
    cout << "Ĭ��" << regex_replace(str, reg, "8888", regex_constants::format_default) << endl;
    
}

int main()
{
    testReplace();
    system("pause");
    return 0;
}