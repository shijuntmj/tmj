#include<iostream>
#include<memory>
#include<string>
using namespace std;
/*
unique_ptr
禁止拷贝和赋值（delete删去了）
unique_ptr(const unique_ptr&) = delete;
unique_ptr& operator=(const unique_ptr&) = delete;
移交所有权：
1.move
2.release+reset	
*/
class myData
{
    public:
        myData(int num) : num(num)
        {
            cout << "mydata" << endl;
        }
        int getNUm()
        {
            return num;
        }
        ~myData()
        {
            cout << "~myData" << endl;
        }
    protected:
        int num;
};
int main()
{
    unique_ptr<int> pte(new int(100));
    cout << *pte << endl;
    cout << pte.get()[0] <<endl;
    unique_ptr<int> ptr1(move(pte));
    cout << *ptr1 << endl;
    cout << pte.get() << endl;
    unique_ptr<int> ptr2;
    ptr2 = move(ptr1);
    cout << ptr2.get()[0] <<endl;
    cout << ptr1.get() << endl;

    unique_ptr<myData> pData(new myData(100));
    cout << pData->getNUm() << endl;
    unique_ptr<myData> pData2;
    pData2.reset(pData.release());
    cout << pData2->getNUm() << endl;
    system("pause");
    return 0;
}