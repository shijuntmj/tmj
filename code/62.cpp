#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
    char inputStr[100] = "";
	gets_s(inputStr, 100);
	//首先求输入字符串可见长度
	int i = 0;
	while (inputStr[i] != '\0')
		i++;
	//---------------------------
	printf("strlen:%d\n", i);
	//统计用户的输入的字串中的字母个数，数字个数，其他符号个数
	int count[3] = { 0 }; //count[0]:字母 count[1]:数字  其他字符:count[2]
	i = 0;
	while (inputStr[i] != '\0')
	{
		if (inputStr[i] >= 'A' && inputStr[i] <= 'Z')
			count[0]++;
		else if (inputStr[i] >= 'a' && inputStr[i] <= 'z')
			count[0]++;
		else if (inputStr[i] >= '0' && inputStr[i] <= '9')
			count[1]++;
		else
			count[2]++;
		i++;				//改变一下i
	}
	printf("zm:%d,sz:%d,qt:%d\n", count[0], count[1], count[2]);
    system("pause");
    return 0;
}