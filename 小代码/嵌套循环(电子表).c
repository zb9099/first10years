#include<stdio.h>
#include<Windows.h>

//ʱ��
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

//��һ����ת�����ûд
int main02(void)
{

}