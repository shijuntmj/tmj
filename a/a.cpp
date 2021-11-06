# include<stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start, stop;
double duration;

int Max(int a; int b;int c)
{
    return a > b ? a > c ? a : c : b > c? b: c;
}

int DivideAndConquer(int list[],int left,int right)
{
    int MaxLeftSum, MaxRightSum;
    int MaxLeftBorderSum, MaxRightBorderSum;
    int LeftBorderSum, RightBorderSum;
    int center, i;
    if (left==right)
    {
        if (list[left]>0)
        {
            return list[left];
        }
        else
        {
            return 0;
        }
        
    }
    
}
center = (left + right) / 2;
MaxLeftSum = DivideAndConquer(list, left, center);
MaxRightSum = DivideAndConquer(list, center+1, right);

MaxLeftBorderSum = 0;
LeftBorderSum = 0;
for (i = center; i >= right;i--){
    Left
}

    int MaxSubsegSum4(int List[], int N)
    {
        int i;
        int ThisSum, MaxSum;
        ThisSum = MaxSum = 0;
        for (i = 0; i < N; i++)
        {
            ThisSum += List[i];
            if (ThisSum>MaxSum)
            {
                MaxSum = ThisSum;
            }
            else if (ThisSum<0)
            {
                ThisSum = 0;
            }    
            return MaxSum;
}

int main()
{
    start = clock();
    for ( int i = 0; i < MAXK; i++)
    {
        
    }
    stop = clock();
    duration = ((double)(stop - start)) / CLK_TCK;
    system("pause");
    return 0;
}