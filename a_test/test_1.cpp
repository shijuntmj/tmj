#include<iostream>
#include<iterator>
#include<array>
using namespace std;
class Array
{
    public:
        Array();
        Array(int **a)
        {
            a = (int**)calloc(2,sizeof(int*));
            for (int i = 0; i < 2;i++)
            {
                a[i] = (int *)calloc(3, sizeof(int));
            }
        }
        friend istream &operator>>(istream &in,Array& t);
        friend ostream &operator<<(ostream &out,Array& t);
        ~Array()
        {
            for (int i = 0; i < 2;i++)
            {
                free(a[i]);
            }
            free(a);
            a = nullptr;
        }
    private:
        int **a;
};
istream &operator>>(istream&in,Array& t)
{
    cout << "ÊäÈëarray[2][3]:" << endl;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            in >> t.a[i][j];
        }
    }
    return in;
}
ostream &operator<<(ostream &out,Array& t)
{
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            out << t.a[i][j]<<"\t";
        }
        out << endl;
    }
    return out;
}
// typedef int (*array2D)[3];
// int(*)[3] operator+(int a[2][3],int b[2][3])
// {
//     static int c[2][3] = {0};
//     for (size_t i = 0; i < 2; i++)
//     {
//         for (size_t j = 0; j < 3; j++)
//         {
//             c[i][j]=a[i][j] + b[i][j];
//         }
//     }
//     return c;
// }
int main()
{
    Array array1, array2, result;
    cin >> array1 >> array2;
    // result = array1 + array2;
    cout << result << endl;
    system("pause");
    return 0;
}