#include<stdio.h>

int main()
{
	int temp,t;
	int arr[10] = { 5,4,9,6,2,1,8,7,10,12 };
	for (int i = 0; i < 10; i++)
	{
		temp = i;
		for (int j = 0; j + i < 10; j++)
		{
			if (a[(j + i)] > a[temp])
			{
				temp = j + i;
			}
		}
		t = a[i];
		a[i] = a[temp];
		a[temp] = t;
	}
	for (int k = 0; k < 8; k++)
	{
		printf("%d", arr[k]);
	}
	system("pause");
	return 0;
}
