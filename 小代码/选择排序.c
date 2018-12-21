#include<stdio.h>

int main()
{
	int max = 0;
	int arr[8] = { 5,4,9,6,2,1,8,7 };
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j + i < 8; j++)
		{
			if (arr[(j + i)] > max)
			{
				max = arr[j];
			}
		}
		arr[i] = max;
	}
	for (int k = 0; k < 8; k++)
	{
		printf("%d", arr[k]);
	}
	system("pause");
	return 0;
}
