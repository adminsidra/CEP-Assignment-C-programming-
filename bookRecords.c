#include <stdio.h>
#include <stdlib.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    FILE *fp;
    struct Book b;
    int choice, idFound = 0;
    
    do {
        printf("\n1. Add Book\n2. Display Books\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            fp = fopen("books.txt", "a");
            printf("Enter Book ID, Title, Author: ");
            scanf("%d %s %s", &b.id, b.title, b.author);
            fwrite(&b, sizeof(b), 1, fp);
            fclose(fp);
        }
        else if(choice == 2) {
            fp = fopen("books.txt", "r");
            while(fread(&b, sizeof(b), 1, fp))
                printf("%d %s %s\n", b.id, b.title, b.author);
            fclose(fp);
        }
    } while(choice != 3);
    
    return 0;
}
