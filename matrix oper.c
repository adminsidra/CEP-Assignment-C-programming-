#include <stdio.h>

#define SIZE 2

void addMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE]) {
    printf("Addition:\n");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++)
            printf("%d ", a[i][j]+b[i][j]);
        printf("\n");
    }
}

int main() {
    int a[SIZE][SIZE] = {{1,2},{3,4}};
    int b[SIZE][SIZE] = {{5,6},{7,8}};
    
    addMatrix(a,b);
    return 0;
}
