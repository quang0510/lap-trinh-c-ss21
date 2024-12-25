#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    int n; 
    FILE *file;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("id: ");
        scanf("%d", &students[i].id);
        printf("Ten: ");
        getchar();
        fgets(students[i].name, 50, stdin);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
    }
    file = fopen("students.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d, %s, %d\n", students[i].id, students[i].name, students[i].age);
    }
    fclose(file);
}
