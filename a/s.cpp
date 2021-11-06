#include<stdlib.h>
#include <stdio.h>
int main()
{
	int a[6];
	FILE* fpread;
	fpread = fopen("data.txt", "r");
	if (fpread == NULL)
	{
		printf("file is error.");
		return -1;
	}

	
		for (int j = 0; j < 6; j++)
		{
			fscanf(fpread, "%d", &a[j]);
		}
	
	fclose(fpread);

		for (int j = 0; j < 6; j++)
		{
			printf("%d\t",a[j]);
		}
		printf("\n");

        system("pause");
        return 0;
}
