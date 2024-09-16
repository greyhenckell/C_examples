#include <stdio.h>

struct Student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct Student S = {1, "franck", 100.0};
    struct Student S2;
    printf("enter info 2 rollno:");
    scanf("%d", &S2.rollno);
    printf("enter info 2 name:");
    scanf("%s", S2.name);
    printf("enter info 2 mark:");
    scanf("%f", &S2.marks);

    printf("info student 1: %d| %s| %f\n", S.rollno, S.name, S.marks);
    printf("info student 2: %d| %s| %f\n", S2.rollno, S2.name, S2.marks);
    return 0;
}