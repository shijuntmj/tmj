// arrayÓëvector Ç¶Ì×
// vector.resize()º¯Êý
#include<iostream>
#include<vector>
#include<array>
using namespace std;
void ve_ar()
{
    vector<array<int, 3>> ve_ar;
    ve_ar.resize(6);
    for (size_t i = 0; i < ve_ar.size(); i++)
    {
        for (size_t j = 0; j < ve_ar[i].size(); j++)
        {
            ve_ar[i][j] = i + j;
        }
        
    }
    for (size_t i = 0; i < ve_ar.size(); i++)
    {
        for (size_t j = 0; j < ve_ar[i].size(); j++)
        {
            cout << ve_ar[i][j] << "\t";
        }
        cout << endl;
    }
}
void ar_ve()
{
    array<vector<int>, 3> ar_ve;
    for (size_t i = 0; i < ar_ve.size(); i++)
    {
        ar_ve[i].resize(6);
        for (size_t j = 0; j < ar_ve[i].size(); j++)
        {
            ar_ve[i][j] = i + j;
        }
        
    }
    for (size_t i = 0; i < ar_ve.size(); i++)
    {
        for (size_t j = 0; j < ar_ve[i].size(); j++)
        {
            cout << ar_ve[i][j];
        }
        cout << endl;
    }
    
}
void ar_ar()
{
    array<array<int, 3>, 4> ar_ar;
    for (size_t i = 0; i < ar_ar.size(); i++)
    {
        for (size_t j = 0; j < ar_ar[i].size(); j++)
        {
            ar_ar[i][j] = i + j;
        }
        
    }
        for (size_t i = 0; i < ar_ar.size(); i++)
    {
        for (size_t j = 0; j < ar_ar[i].size(); j++)
        {
            cout<<ar_ar[i][j]<<"\t";
        }
        cout << endl;
    }
}
void ve_ve()
{
    vector<vector<int>> ve_ve;
    ve_ve.resize(6);
    for (size_t i = 0; i < ve_ve.size(); i++)
    {
        ve_ve[i].resize(9);
        for (size_t j = 0; j < ve_ve[i].size(); j++)
        {
            ve_ve[i][j] = i + j;
        }
        
    }
    for (size_t i = 0; i < ve_ve.size(); i++)
    {
        for (size_t j = 0; j < ve_ve[i].size(); j++)
        {
            cout << ve_ve[i][j];
        }
        cout << endl;
    }
    
}
int main()
{
    ve_ar();
    ar_ve();
    ar_ar();
    ve_ve();
    getchar();
    return 0;
}