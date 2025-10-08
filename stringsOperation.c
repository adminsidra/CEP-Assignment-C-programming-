#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    for(int i = len-1; i >= 0; i--)
        printf("%c", str[i]);
}

int isPalindrome(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while(i < j) {
        if(str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}

int main() {
    char str1[50], str2[50];
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Reversed: ");
    reverse(str1);
    printf("\nPalindrome: %s\n", isPalindrome(str1) ? "Yes" : "No");
    
    printf("\nEnter another string to concatenate: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);

    return 0;
}
