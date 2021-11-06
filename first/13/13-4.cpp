// map图利用数对pair实现对应关系<键，值>
// 键唯一，可以下标法访问
// multimap
// 键不唯一，允许重复，不能通过下标法方位
#include<iostream>
#include<map>
#include<string>
using namespace std;
class MM
{
    public:
        MM() = default;
        MM(string name, int age) : name(name), age(age){}
        string getName() const
        {
            return name;
        }
        int getAge() const
        {
            return age;
        }
    protected:
        string name;
        int age;
};
class Boy
{
    public:
        Boy() = default;
        Boy(string name,int age):name(name),age(age){}
        string getName() const
        {
            return name;
        }
        int getAge() const
        {
            return age;
        }
    protected:
        string name;
        int age;
};
class MMcompareLessByName
{
    public:
    bool operator()(const MM& one,const MM& two) const
    {
        return one.getName() < two.getName();
    }
};
void testPair()
{
    pair<int, string> pData = {1, "string1"};
    cout << "键" << pData.first << "值" << pData.second << endl;
}
void testMap()
{
    map<int, string> mapOne;
    mapOne[1] = "string1";
    mapOne[2] = "string2";
    mapOne.insert(pair<int, string>(3, "string3"));
    mapOne.insert(make_pair(4, "string4"));
    mapOne.insert({5, "string5"});
    for(auto v:mapOne)
    {
        cout << v.first << "\t" << v.second << endl;
    }
    cout << endl;
    for (auto iter = mapOne.begin(); iter != mapOne.end();iter++)
    {
        cout << iter->first << "\t" << iter->second << endl;
    }
}

void testMap1()
{
    map<MM, Boy,MMcompareLessByName> bm;
    bm[MM("莉莉1", 12)] = Boy("李思1", 12);
    bm[MM("莉莉2", 13)] = Boy("李思2", 13);
    bm[MM("莉莉3", 14)] = Boy("李思3", 14);
    bm.insert(pair<MM, Boy>({"lili1", 12}, {"lisi1",12}));
    bm.insert(make_pair(MM{"lili2", 13},Boy{"lisi2", 13}));//make_pair识别不了,加上MM,Boy标识就行
    bm.insert({MM("lili3", 14), Boy("lisi3", 14)});
    for(auto v:bm)
    {
        cout << v.first.getName() << "\t" << v.first.getAge() << "匹配"
            << v.second.getName() << "\t" << v.second.getAge() << endl;
    }
    cout << endl;
    for (auto iter = bm.begin(); iter != bm.end();iter++)
    {
        cout << iter->first.getName() << "\t" << iter->first.getAge() << "匹配"
            << iter->second.getName() << "\t" << iter->second.getAge() << endl;
    }
}
int main()
{
    testMap();
    testMap1();
    getchar();
    return 0;
}