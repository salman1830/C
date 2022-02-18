#include<stdio.h>
#include<stdlib.h>

typedef struct customer{
char name[20];
int nid;
int age;
char occu[15];
int balance;
}Emp;

void add_info(Emp *emp);
void view_info(Emp emp[]);

int n = 2;

int main()
{
    int i;
    Emp emp[n];
    for(i = 0; i < n; i++)
    {
        add_info(&emp[i]);
    }
    view_info(emp);
    return 0;
}

void add_info(Emp *emp)
{
    printf("Enter the name of an employee: ");
    fflush(stdin);
    scanf("%[^\n]s", emp->name);
    printf("Enter the NID of an employee: ");
    fflush(stdin);
    scanf("%d", &emp->nid);
    printf("Enter the Age of an employee: ");
    fflush(stdin);
    scanf("%d", &emp->age);
    printf("Enter the Occupation of an employee: ");
    fflush(stdin);
    scanf("%[^\n]s", emp->occu);
    printf("Enter the Balance of an employee: ");
    fflush(stdin);
    scanf("%f", &emp->balance);
    system("cls");
}


void view_info(Emp emp[])
{
    system("cls");
    int i;
    float m_bal, a_bal, t_bal;
    printf("\n\n \t\t\t ***********************  Employee Info.  ***************************\n\n");
    printf("\tName\t\tNID\tage\tOccupation\t\tBalance\tInterest\tAnnual balance\t  7 year banalce\n\n");

    for(i = 0; i < n; i++)
    {
        m_bal = emp[i].balance*0.065;
        a_bal = emp[i].balance + m_bal*12;
        t_bal = a_bal + (m_bal*12)*7;
        printf(" \t%-10s", emp[i].name);
        printf("\t%d", emp[i].nid);
        printf("\t%d", emp[i].age);
        printf("\t%-15s", emp[i].occu);
        printf("\t%.2f", emp[i].balance);
        printf("\t%.2f", m_bal);
        printf("\t%.2f", a_bal);
        printf("\t\t %.2f\n", t_bal);
    }
}
