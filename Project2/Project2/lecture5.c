#include <stdio.h>

int main(void)
{
    int num = 0;

    printf("���� �Է�:");
    scanf_s("%d", &num);

    if (num > 100 || num < 0)
        printf("�߸� �Է�\n");
    else if (num >= 90)
        printf("A\n");
    else if (num >= 80)
        printf("B\n");
    else if (num >= 70)
        printf("C\n");
    else if (num >= 60)
        printf("D\n");
    else
        printf("F\n");

    return 0;
}