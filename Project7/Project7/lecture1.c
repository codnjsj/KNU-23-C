#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};

int main(void) {
	int num_students;
	printf("�л� �� �Է� :");
	scanf_s("%d", &num_students);

	int* scores;
	scores = (int*)malloc(sizeof(int) * num_students);

	for (int i = 0; i < num_students; i++) {
		printf("�л� # %d-%d ���� �Է� :", num_students, i + 1);
		scanf_s("%d", scores + i);
	}
	float sum = 0;
	for (int i = 0; i < num_students; i++) {
		sum += scores[i];
	}

	printf("���� : %f\n\n", sum);

;

	for (int i = 0; i < num_students; i++) {
	printf("�л� %d-%d ���� ��� : %d\n", num_students, i + 1, scores[i]);}

	printf("��� ���� : %.2f", sum / num_students);
	free(scores);
	scores = NULL;

	return 0;
}