#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//非常麻烦的插入:(
int main()
{
	int a[5] = { 4,6,8,5,2 };
	int b, t;
	int c[6];
	scanf("%d", &b);
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4-i; j++)
			if (a[j]>a[j+1])																			
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	for (int k = 0; k < 4; k++)
	{
		if (a[k]<=b&&a[k+1]>=b)
		{
			for (int m = 0; m <= k; m++)
			{
				c[m] = a[m];
			}
			c[k + 1] = b;
			for (int n = k+2; n < 6; n++)
			{
				c[n] = a[n - 1];
			}
		}
		else if(b<a[0])
		{
			c[0] = b;
			for (int s = 1; s < 6; s++)
			{
				c[s] = a[s - 1];
			}
		}
		else if(b>a[4])
		{
			c[5] = b;
			for (int s = 0; s < 5; s++)
			{
				c[s] = a[s];
			}
		}
	}
	for (int p = 0; p < 6; p++)
	{
		printf("%d ", c[p]);
	}
	putchar(10);
	for (int r = 0; r < 6/2; r++)
	{
		t = c[r];
		c[r] = c[5 - r];
		c[5 - r] = t;
	}
	for (int p = 0; p < 6; p++)
	{
		printf("%d ", c[p]);
	}

	system("pause");
	return 0;
}
