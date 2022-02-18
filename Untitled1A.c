
#include <stdio.h>
int main(){
int a;
printf("Enter your mark ");
scanf("%d",&a);
printf(" You entered %d", a);

	if(a>=80&&a<=100){
	printf(" A+ ");
		}
	else if ( a>=70&&a<=100){
		printf(" A");
		}
	else if (a>=60&&a<=100 ){
		printf(" A- ");
		}
	else if (a>=40&&a<=100 ){
		printf(" F ");
		}
return 0;
}
