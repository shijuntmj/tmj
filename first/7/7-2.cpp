#include<iostream>
using namespace std;
struct Boy
{
    int age;
    string name;
};
istream &operator>>(istream &in, Boy &boy)
{
    cout << "input info";
    in >> boy.name >> boy.age;
    return in;
}
ostream &operator<<(ostream &out, Boy &boy)
{
    out << boy.name << "\t" << boy.age << endl;
}
class MM
{
    public:
        void test(istream& in)
        {
            cout << "input information of MM";
            in >> this->name >> this->age;
        }
        //friend istream &operator>>(istream &in, MM &mm);
        friend ostream &operator<<(ostream &out, MM &mm);
    protected:
        int age;
        string name;
};

istream &operator>>(istream &in, MM &mm)
{
    mm.test(in);
    return in;
}

ostream &operator<<(ostream &out, MM &mm)
{
    out << mm.name << "\t" << mm.age << endl;
    return out;
}
int main()
{
    Boy boy1;
    MM mm1;
    cin >> boy1;
    cout << boy1;
    operator>>(cin, boy1);
    operator<<(cout, boy1);
    cin >> mm1;
    cout << mm1;
    operator>>(cin, mm1);
    operator<<(cout, mm1);
    while(1)
    {

    };
    return 0;
}