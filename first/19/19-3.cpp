#include<iostream>
#include<regex>
using namespace std;
//正则替换
void testReplace()//将string中数字替换
{
    string str = "iloveyou13imissyou14";
    regex reg("\\d+");
    cout << regex_replace(str, reg, "8888") << endl;
    cout << str << endl;
    //只替换首次
    cout << "第一次匹配到的" << regex_replace(str, reg, "8888", regex_constants::format_first_only) << endl;
    //不拷贝不匹配的
    cout << "不拷贝不匹配的" << regex_replace(str, reg, "8888", regex_constants::format_no_copy) << endl;
    cout << "默认" << regex_replace(str, reg, "8888", regex_constants::format_default) << endl;
    
}

int main()
{
    testReplace();
    system("pause");
    return 0;
}