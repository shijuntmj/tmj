#include<stdio.h>

#include<stdlib.h>>

#include<string.h>

#define M 100//最大行数

int main()

{

  FILE *fp=NULL;

    int nums[M],age[M],i=0,n1,n2,len=0;

    char name[M][10],str[10];

    fp=fopen("c:\\test.data","r");

    while(fscanf(fp,"%d%s%d",&n1,str,&n2)!=-1)

    {

        nums[i]=n1;

        strcpy(name[i],str);

        age[i]=n2;

        i++;

        len++;

    }

    for(i=0;i<len;i++)

    printf("%d %s %d\n",nums[i],name[i],age[i]);

    system("pause");

    return 0;

}
