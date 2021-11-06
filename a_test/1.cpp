#include<iostream>
#include<iterator>
using namespace std;
int**& Make_Array(int**& a)
{
    a = new int *[2];
    for (int i = 0; i < 3;i++)
    {
        a[i] = new int[3];
    }
    return a;
}
void Delete_Array(int**& a)
{
    for (int i = 0; i < 2;i++)
    {
        delete[] a[i];
        a[i] = nullptr;
    }
    delete[] a;
    a = nullptr;
}
istream &operator>>(istream&in,int**& a)
{
    cout << "ÊäÈëarray[2][3]:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp = 0;
            cin >> temp;
            a[i][j]=temp;
        }
    }
    return in;
}

int**& operator+(int**& a,int**& b)
{
    static int **c;
    Make_Array(c);
    for (int i = 0; i < 2;i++
    {
        for (int j = 0; j < 3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}
ostream &operator<<(ostream &out,int**& a)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            out << *((a+i)+j) <<"\t";
        }
        out << endl;
    }
    return out;
}
int main()
{
    int **array1;
    int **array2;
    int **array3;
    Make_Array(array1);
    Make_Array(array2);
    Make_Array(array3);
    cin >> array1 >> array2;
    array3 = array1 + array2;
    cout << "½á¹û" << endl;
    cout << array3<< endl;
    system("pause");
    return 0;
}