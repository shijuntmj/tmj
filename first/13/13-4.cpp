// mapͼ��������pairʵ�ֶ�Ӧ��ϵ<����ֵ>
// ��Ψһ�������±귨����
// multimap
// ����Ψһ�������ظ�������ͨ���±귨��λ
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
    cout << "��" << pData.first << "ֵ" << pData.second << endl;
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
    bm[MM("����1", 12)] = Boy("��˼1", 12);
    bm[MM("����2", 13)] = Boy("��˼2", 13);
    bm[MM("����3", 14)] = Boy("��˼3", 14);
    bm.insert(pair<MM, Boy>({"lili1", 12}, {"lisi1",12}));
    bm.insert(make_pair(MM{"lili2", 13},Boy{"lisi2", 13}));//make_pairʶ����,����MM,Boy��ʶ����
    bm.insert({MM("lili3", 14), Boy("lisi3", 14)});
    for(auto v:bm)
    {
        cout << v.first.getName() << "\t" << v.first.getAge() << "ƥ��"
            << v.second.getName() << "\t" << v.second.getAge() << endl;
    }
    cout << endl;
    for (auto iter = bm.begin(); iter != bm.end();iter++)
    {
        cout << iter->first.getName() << "\t" << iter->first.getAge() << "ƥ��"
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