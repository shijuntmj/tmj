#include<iostream>
using namespace std;
int main()
{
    int s[7];
    for (size_t i = 0; i < 7; i++)
    {
        s[i]=i;
    }
    int a[7];
    for (size_t i = 0; i < 15; i++)
    {
        a[i]=i+7;
    }
    int b[17];
    for (size_t i = 0; i < 17; i++)
    {
        b[i]=i+22;
    }
    long map[39][39]={0};
    for (size_t i = 0; i < 39; i++)
    {
        for (size_t j = 0; j < 39; j++)
        {
            map[i][j]=123456;
        }
        
    }
    for (size_t i = 0; i < 39; i++)
    {
        for (size_t j = 0; j < 39; j++)
        {
            if(i==j)
            {
                map[i][j]=0;
            }
        }
        
    }
    map[a[1]][a[2]]=104;
    // printf("%d",map[1][2]);
    for (size_t i = 0; i < 39; i++)
    {
        printf("row%d\n",i);
        for (size_t j = 0; j < 39; j++)
        {
            printf("%d\t",map[i][j]);
        }
        printf("\n\n");
    }
    while (1)
    {
        /* code */
    }
    return 0;
}