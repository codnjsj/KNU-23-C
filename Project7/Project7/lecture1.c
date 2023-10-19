#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};

int main(void) {
	int num_students;
	printf("학생 수 입력 :");
	scanf_s("%d", &num_students);

	int* scores;
	scores = (int*)malloc(sizeof(int) * num_students);

	for (int i = 0; i < num_students; i++) {
		printf("학생 # %d-%d 성적 입력 :", num_students, i + 1);
		scanf_s("%d", scores + i);
	}
	float sum = 0;
	for (int i = 0; i < num_students; i++) {
		sum += scores[i];
	}

	printf("총점 : %f\n\n", sum);

;

	for (int i = 0; i < num_students; i++) {
	printf("학생 %d-%d 성적 출력 : %d\n", num_students, i + 1, scores[i]);}

	printf("평균 점수 : %.2f", sum / num_students);
	free(scores);
	scores = NULL;

	return 0;
}