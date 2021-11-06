#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
    //printf("kk");
    //创建一个图形窗口
    initgraph(640, 480);
    //画个圆
    circle(320, 240, 120);
    getch();
    closegraph();
    system("pause");
    return 0;
}