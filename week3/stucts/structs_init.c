#include<stdio.h>

struct student {
    char name[20];
    char student_id[11];
    unsigned mark;
};

int main ()
{
    struct student new_student = {"Dummy", "207923412", 1};
    printf("Student Name: %s \n", new_student.name);
    printf("Student ID: %s \n", new_student.student_id);
    printf("Final mark: %u \n", new_student.mark);
    
    
    return 0;    
}