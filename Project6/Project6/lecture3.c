#include<stdio.h>
int main(void) {
	int score[5] = { 87,92,8,98,78 };
	int cnt;

	printf("score[5] = {87,92,89,98,78} �迭 ��� ���\n");

	for (cnt = 0; cnt < 5; cnt++)
		printf("score[%d] = [%d]\n", cnt, score[cnt]);

	return 0;
}