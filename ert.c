#include<stdio.h>

int main(){
	int C = 8, D = 0;
	int a = 25, b = 13, *p1 = 25, *p2 = 13;
	printf("%d\n", (*p1 + *p2) + (C*(*p1)) + (D*(*p2)));
	return 0;
}


int *p;
*p=5;
p
