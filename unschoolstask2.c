				//Assignment:Oprators

#include<stdio.h>
int main(){
	int x,y,z;
	printf("Enter x and y:");
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("\n Sum  of %d  and %d  is %d",x,y,z);
	z=x-y;
	printf("\n Difference of %d and %d is %d",x,y,z);
	z=x*y;
	printf("\n Multiplication of %d and %d is %d",x,y,z);
	z=x/y;
	printf("\n Division of %d and %d is %d",x,y,z);
	return 0;
}
