#include<stdio.h>

int main(void)
{
	int count, hap = 0;

	for (count = 1; count <= 10; count++)
	{
		if (count % 2 == 1) 
		{
			hap += count;
			printf("%d���� ������ ��� : hap = %d\n",count, hap);
		}
	}
}