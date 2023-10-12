#include <stdio.h>

void swap(int* p1, int* p2) {
    int c = *p1;
    *p1 = *p2;
    *p2 = c;
}

void sort(int arr[]) {
    for (int i = 0; i < 4; i++) {
        int min = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            swap(&arr[i], &arr[min]);
        }
    }
}

int main() {
    int arr[5] = {5,4,1,2,3};

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort(arr);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}