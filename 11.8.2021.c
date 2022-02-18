#include<stdio.h>
struct student
{
    int id;
    float cgpa;
} std;
int main()
{
    struct student std[20];;
    scanf("%d %f",&std[0].id,&std[0].cgpa);
    printf("%d %f\n",std[0].id,std[0].cgpa);
}
