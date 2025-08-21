#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float degree;
    char section;
}students[5];

void print(struct Student students[], int size) {
    printf("\nStudent Database:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf(" Name: %s\n", students[i].name);
        printf(" Age: %d\n", students[i].age);
        printf(" Degree: %.2f\n", students[i].degree);
        printf(" Section: %c\n", students[i].section);
        printf("\n");
    }
}

int main() {
    students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter data for student %d:\n", i + 1);

        printf(" Name: ");
        scanf("%s", students[i].name);

        printf(" Age: ");
        scanf("%d", &students[i].age);

        printf(" Degree: ");
        scanf("%f", &students[i].degree);

        printf(" Section: ");
        scanf(" %c", &students[i].section);

        printf("\n");
    }

    print(students, 5);

    return 0;
}
