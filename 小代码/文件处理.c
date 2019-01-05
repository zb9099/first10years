#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp,*fp1;
	char ch;
	if ((fp=fopen("love.txt","w"))==NULL)
	{
		printf("error");
		exit(0);
	}
	
	int i = 10, j = 36;
	fprintf(fp, "%d %d", i, j);
	/*
	ch = getchar();
	while (ch!='#')
	{
		fputc(ch, fp);
		ch = getchar();
	}
	*/
	//fscanf 用的逻辑不清晰
	fscanf(fp, "%d %d", &j, &i);
	printf("%d %d", i, j);
	fclose(fp);
	putchar(10);
	system("pause");
	return 0;
}
