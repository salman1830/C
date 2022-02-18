#include<stdio.h>
struct student
{
    int id;
    float cgpa;
};
int main()
{
    int x;
    struct student std[20];
    for(x=0;x<6;x++){
        scanf("%d %f",&std[x].id,&std[x].cgpa);
    }
     for(x=0;x<6;x++){
         printf("Id=%d CGPA=%f\n",std[x].id, std[x].cgpa);
    }
}
