#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
void inarr(int a[], int);
void outarr(int a[], int);
void process(int a[], int);


int main()
{
	int a[10];
	inarr(a, 10);
	outarr(a, 10);
	process(a, 10);
	outarr(a, 10);
	system("pause");
	return 0;
}
void inarr(int a[], int n)
{
	int i;
	printf("Input:");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
}
void outarr(int a[], int n)
{
	int i;
	printf("Output:");
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");
}
void process(int a[], int n)
{
	int min=a[0],max=a[0],imin=0,imax=0,i;
	for (i = 0; i < n;i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
	}
	i = a[0];
	a[0] = a[imin];
	a[imin] = i;
	i= a[n - 1];
	a[n - 1] = a[imax];
	a[imax] = i;
}
