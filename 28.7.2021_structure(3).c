#include<stdio.h>
typedef struct student
{
    int id;
    float cgpa;
}std;

int main()
{
    std s1, *ptr;

    ptr = &s1;

    ptr->id = 10;
    ptr->cgpa = 3.5;

    printf("%d   %f", ptr->id, ptr->cgpa);

    return 0;
}
