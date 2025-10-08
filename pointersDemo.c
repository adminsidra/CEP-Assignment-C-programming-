#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    printf("Array traversal using pointer:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", *(p+i));

    int a = 10, b = 20, temp;
    int *x = &a, *y = &b;
    temp = *x; *x = *y; *y = temp;
    printf("\nAfter swap: a=%d b=%d\n", a, b);

    char *str = (char*)malloc(20 * sizeof(char));
    strcpy(str, "Hello");
    strcat(str, " World!");
    printf("Dynamic String: %s\n", str);
    free(str);

    return 0;
}
