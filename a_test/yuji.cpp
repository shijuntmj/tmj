#include<iostream>
#include<iterator>
#include<array>
using namespace std;
istream &operator>>(istream&in,int a[2][3])
{
    cout << "ÊäÈëarray[2][3]:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            in >> a[i][j];
        }
    }
    return in;
}
ostream &operator<<(ostream &out,int a[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            out << a[i][j]<<"\t";
        }
        out << endl;
    }
    return out;
}
// typedef int array2D[2][3];
// array2D operator+(int (*a)[3],int (*b)[3])
// {
// 	static int(*c)[3];
// 	for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c[i][j]=a[i][j] + b[i][j];
//         }
//     }
//     return c;
// }
int main()
{
	int array1[2][3] = {0};
	int array2[2][3] = {0};
	int result[2][3] = {0};
	cin >> array1 >> array2;
    // result = array1 + array2;
    cout << "??" << endl;
    cout << result << endl;
    system("pause");
    return 0;
}