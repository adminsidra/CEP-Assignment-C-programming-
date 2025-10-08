#include <stdio.h>

struct Student {
    char name[50];
    int marks[3];
    float average;
};

// Function to calculate average
float calcAverage(int marks[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += marks[i];
    return (float)sum / n;
}

int main() {
    struct Student s;
    printf("Enter student name: ");
    scanf("%s", s.name);
    
    printf("Enter marks of 3 subjects: ");
    for(int i = 0; i < 3; i++)
        scanf("%d", &s.marks[i]);
        
    s.average = calcAverage(s.marks, 3);
    
    printf("\nStudent: %s\nAverage Marks: %.2f\n", s.name, s.average);
    return 0;
}
