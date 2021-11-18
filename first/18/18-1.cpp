#include<iostream>
#include<iomanip>
using namespace std;
void testString()
{
    char str[10] = "";
    cin.getline(str, 10);
    cout.write(str,10);
    char userkey = cin.get();
    cout.put(userkey);
}
int main()
{
    int a = 0;
    int b = 90;
    if(a==0)
    {
        cerr << "v" << endl;
    }
    // testString();
    // char m=cin.get();
    // if(cin.fail())
    // {
    //     cin.clear();
    //     cout << "again" << endl;
    //     m = cin.get();
    // }
    // cout << m << endl;
    double a1 = 31.1221234;
    cout << setprecision(4) << a1 << endl;
    cout <<setfill('a')<<setiosflags(ios::right)<<fixed<< setprecision(4) << a1 <<setw(16)<<a1<< endl;
    system("pause");
    return 0;
}