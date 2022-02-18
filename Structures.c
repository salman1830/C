#include<stdio.h>
struct students
{
    int id;
    float cgpa;
};

int main()
{
    int i;
    struct students a[40];

    for(i=0; i<3; i++)
    {
        scanf("%d%f",&a[i].id,&a[i].cgpa);
    }

    for(i=0; i<3; i++)
    {
        printf("ID:%d CGPA:%.2f \n",a[i].id, a[i].cgpa);
    }
}
