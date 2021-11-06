#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 6};
    vector<int> Num;
    Num.assign(array,array+10);//fun1
    // ����Ԫ�أ����ص�һ��������
    auto iter = find(Num.begin(), Num.end(), 8);//fun2
    if(iter==Num.end())
    {
        cout << "δ�ҵ�" << endl;
    }
    else
    {
        cout << *iter << endl;
    }
    //������������Ԫ�أ����ص�һ��������
    auto iter1 = find_if(Num.begin(), Num.end(), [](int data){ return data > 7; });//fun3
    cout << *iter1 << endl;
    //���ҵ�һ������Ԫ�أ����ص�һ��������
    int temp[2] = {4, 5};
    cout << *find_first_of(Num.begin(), Num.end(), temp, temp + 2) << endl;//fun4
    //�����ظ�Ԫ�أ����ص�һ��������
    int array1[5] = {1, 2, 3, 4, 4};
    cout << *adjacent_find(array1, array1 + 5) << endl;
    // �����ظ���һ��Ԫ�أ����ص�һ��������
    int temp1[3] = {1, 2, 3};
    cout << *search(Num.begin(), Num.end(), temp1, temp1 + 3) << endl;
    //���ҳ���n�ε�Ԫ��
    int array2[8] = {1, 2, 2, 3, 3, 3, 2, 4};
    cout << *search_n(array2, array2+8, 3/*n*/, 3) << endl;
    // ���� �������� �Ƚ�
    cout << count(array2, array2 + 8, 3) << endl;
    cout << count_if(array2, array2 + 8, [](int a){ return a > 2; })<<endl;
    cout << boolalpha << equal(temp1, temp1 + 3, array1,array1+5)<<endl;
    // ����Ӷ��ֲ���,����һ��bool����
    int array3[10] = {1, 2, 3, 9, 8, 7, 5, 6, 4, 10};
    sort(array3, array3 + 10);
    for(auto v:array3)
    {
        cout << v << "\t";
    }
    cout << endl;
    cout << boolalpha << binary_search(array3, array3 + 10, 4) << endl;
    // ���Ҵ��ڣ����ص�����
    cout << *upper_bound(array3, array3 + 10, 4)<<endl;
    // ���Ҵ��ڵ��ڣ����ص�����
    cout << *lower_bound(array3, array3 + 10, 4) << endl;
    // ����<���ڵ���,����>,����ֵ��һ������
    cout << *equal_range(array3, array3 + 10, 4).first << endl;
    cout << *equal_range(array3, array3 + 10, 4).second << endl;
    system("pause");
    return 0;
}