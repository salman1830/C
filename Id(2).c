#include<stdio.h>
int main()
{
    int a[5], i, j, sum = 0, id = 35;
 printf("Enter array elements: ");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
        if(a[i]%2 == 0){
            sum+= a[i];
        }
    }
    if(sum > id){
        printf("Sum is greater\n");
    }else{
        printf("ID is greater\n");
    }

    return 0;
}
