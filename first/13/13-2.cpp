// bitset×Ö½Ú´æ´¢Æ÷
#include<iostream>
#include<bitset>
using namespace std;
void test()
{
    bitset<4> num("1111");
    cout << num << endl;
    num.flip();
    cout << num << endl;
}
int main()
{
    test();
    getchar();
    return 0;
}