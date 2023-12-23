#include<stdio.h>

typedef struct
{
    char name[20];
    char student_id[11];
    unsigned mark;
} student;

int main()
{
    int number_of_students = 10 , i;
    student students [] = {};
    
    for (i = 0; i< number_of_students; i++)
    {
        printf("--------\n");
    printf("Enter the student name: ");
    scanf("%s", students[i].name);
        printf("Student name: %s\n", students[i].name);

    printf("Enter student's ID: ");
    scanf("%s", students[i].student_id);
        printf("Student ID: %s \n", students[i].student_id);
        
    printf("Enter the student's mark: ");
    scanf("%u", &students[i].mark);
        printf("Final marks: %u \n", students[i].mark);
    } 
    printf("--------\n");
    return 0;
}