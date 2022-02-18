#include <stdio.h>
int main ()
{
    char name [20] = "Aprantor";
    int age, length;
    FILE *fp;
    fp = fopen ("aprantor.txt","w+");


    fprintf (fp, "%s %d", name, 21);

    length = ftell(fp);

    rewind (fp);
    fscanf (fp, "%s", name);
    fscanf (fp, "%d", &age);

    fclose (fp);
    printf ("Name: %s \nAge: %d \n",name,age);
    printf ("Total number of characters in file is %d", length);
    return 0;
}
