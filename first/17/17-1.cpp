//share_ptr.h
#include<iostream>
#include<memory> 
#include<string>
using namespace std;
class MM
{
    public:
        MM(string name, int age) : name(name), age(age){};
        ~MM()
        {
            cout << "MM" << endl;
        }
        void print()
        {
            cout << name << age << endl;
        }
    protected:
        int age;
        string name;
};
class Test
{
    public:
    Test()
    {
        cout << "1" << endl;
    }
    ~Test()
    {
        cout << "2" << endl;
    }
};
auto return_share()
{
    shared_ptr<MM> pmm(new MM("ad" , 12));
    return pmm;//可以返回值
}
void colsefile(FILE* file)
{
    cout << "释放成功" << endl;
    fclose(file);
}
void test_share(shared_ptr<MM> a)
{
    a->print();
    // a.get()->print();
    a = return_share();
    a->print();
    //不能直接delete
    //1.函数指针
    {
        shared_ptr<FILE> pf(fopen("1.txt", "w+"), colsefile);
    }
    //2.对象数组
    {
        cout << "对象数组" << endl;
        shared_ptr<Test> p(new Test[10], [](Test *a){ delete[] a; });
    }
}
int main()
{
    shared_ptr<int> Pint;
    if(!Pint)
    {
        cout << "空指针" << endl;
    }
    shared_ptr<int> a(new int(100));
    shared_ptr<int> pMake = make_shared<int>(1);
    shared_ptr<MM> PMM = make_shared<MM>("baby", 12);
    // function
    /*
    get()得到对象地址
    use_count()指向对象的智能指针数
    reset()重铸绑定
    */
    shared_ptr<MM> pmm(new MM("MM", 18));
    pmm.get()->print();
    cout << "count" << pmm.use_count() << endl;
    shared_ptr<MM> pmm2(pmm);
    cout << "count" << pmm2.use_count() << endl;
    pmm2.reset(new MM("baby",12));
    // pmm2.reset();
    cout << "count" << pmm2.use_count() << endl;
    cout << "count" << pmm.use_count() << endl;
    test_share(pmm2);

    system("pause");
    return 0;
}