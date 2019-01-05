#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 5
struct student
{
	int num;
	char name[10];
	float score;
}stu[N];

void save()
{
	FILE *fp;
	if ((fp=fopen("love.dat","w"))==NULL)
	{
		printf("error");
		exit(0);
	}
	for (int  i = 0; i < N; i++)
	{
		fwrite(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
}
int main()
{
	for (int i = 0; i < N; i++)
		scanf("%d %s %f", &stu[i].num, stu[i].name, &stu[i].score);
	save();
	system("pause");
	return 0;
}