#include <iostream>
#include <stdio.h>
#define size 10

int main()
{
    int i, j, k;

    int array[size];

    for (i = 0; i < size; i++) {
        printf("Enter %d number: ", i + 1);
        scanf_s("%d", &array[i]);
    }

    for (j = 1; j < size; j += 2) {
        array[j] = 0;
    }

    for (k = 0; k < size; k++) {
        printf("%d\n", array[k]);
    }
    return 0;
}