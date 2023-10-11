#include <stdio.h>

int main(void) {
    int input;

    printf("수를 입력하세요: ");
    scanf_s("%d", &input);

    if (input % 2 == 0) {
        printf("입력한 %d는(은) 짝수입니다.\n", input);
    }
    else {
        printf("입력한 %d는(은) 홀수입니다.\n", input);
    }
    return 0;
}