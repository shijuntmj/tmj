#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name[100];
    scanf("%s",name);
    char *p = name;
    int a = strcmp(p, "qw");
    printf("%d", a);
    system("pause");
    return 0;
}
