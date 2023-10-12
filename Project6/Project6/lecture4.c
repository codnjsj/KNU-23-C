#include<stdio.h>

void swap(int* A, int* B)
{
	int C = *A;
	*A = *B;
	*B = C;
}

int main() {
	int a = 10, b = 500;

	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
}