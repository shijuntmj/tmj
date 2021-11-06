#include<iostream>
#include<iterator>
using namespace std;
class Point
{
    public:
        Point()
        {
            Intpoint = new int *[2];
            for (int i = 0; i < 2;i++)
            {
                Intpoint[i] = new int[3];
            }
        }
        friend istream& operator>>(istream &in, Point &a);
		friend Point& operator+(Point &a1,Point& a2);
		friend ostream &operator<<(ostream &out,Point& a);
        ~Point()
        {
            for (int i = 0; i < 2;i++)
            {
                delete []Intpoint[i];
                Intpoint[i] = nullptr;
            }
            delete[] Intpoint;
            Intpoint = nullptr;
        }
    private:
        int **Intpoint;
};
istream& operator>>(istream &in, Point &a)
{
	cout << "ÊäÈëarray[2][3]" << endl;
	for (int i = 0; i < 2;i++)
    {
        for (int j = 0; j < 3;j++)
        {
			in >> a.Intpoint[i][j];
		}
    }
    return in;
}
Point& operator+(Point &a1,Point &a2)
{
	for (int i = 0; i < 2;i++)
	{
		for (int j = 0; j < 3;j++)
		{
			a1.Intpoint[i][j] += a2.Intpoint[i][j];
		}
	}
	return a1;
}
ostream& operator<<(ostream& out,Point &a)
{
    for (int i = 0; i < 2;i++)
    {
        for (int j = 0; j < 3;j++)
        {
			out << a.Intpoint[i][j] << "\t";
		}
        out << endl;
    }
    return out;
}
int main()
{
    Point p1,p2,p3;
    cin >> p1 >> p2;
	p3 = p1 + p2;
	cout << "½á¹û" << endl;
    cout << p3 << endl;
    system("pause");
    return 0;
}
