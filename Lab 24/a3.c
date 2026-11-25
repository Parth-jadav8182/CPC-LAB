// 3. Calculate the sum of n numbers entered by the user using calloc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int *arr;

    printf("Enter n: ");
    scanf("%d", &n);

    // calloc - memory zero thi start thase
    arr = (int *)calloc(n, sizeof(int));

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    free(arr);
    return 0;
}