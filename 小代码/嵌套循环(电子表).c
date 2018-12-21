#include<stdio.h>
#include<Windows.h>

//时钟
int main(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			for (int second = 0; second < 60; second++)
			{
				system("cls");
				printf("%02d:%02d:%02d", hour, minute, second);
				Sleep(995);
			}
		}
	}
	system("pause");
	return 0;
}

//有一个跳转语句我没写
int main02(void)
{

}