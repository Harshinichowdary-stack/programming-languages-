#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s1[100],s2[100],s3[100],s4[100],c1[100],c2[100];
	float a;
	int b,c,d,e,f,g,i,n;
	//using strcmp() function
	printf("\nEnter c1:");
	scanf("%s",&c1);
	printf("\nEnter c2:");
	scanf("%s",&c2);
	printf("\nusing strcmp() function:\n");
	if(strcmp(c1,c2)==0){
		printf("\n2strings are same\n");
	}
	else{
		printf("\n2 strings are not same\n");
	}
	
	//using strcpy() function
	printf("\nEnter s1:");
	scanf("%s",&s1);
	strcpy(s2,s1);
	printf("\nusing strcpy() function:\n");
	printf("\nafter copying s1 into s2 ,s2 is %s\n",s2);
	
	//using strrev() function
	printf("\nEnter s2:");
	scanf("%s",&s2);
	strrev(s2);
	printf("\nusing strrev() function:\n");
	printf("\nafter reversing s2 is: %s\n",s2);
	
	//using strlen() function
	d=strlen(s2);
	printf("\nusing strlen() function:\n");
	printf("\nlength of s2 is: %d\n",d);
	
	//using strupr() function
	printf("\nEnter s3:");
	scanf("%s",&s3);
	strupr(s3);
	printf("\nusing strupr() function:\n");
	printf("\n after conerting string to uppercase s3  is: %s\n",s3);
	
	//using strlwr() function
	printf("\nEnter s4:");
	scanf("%s",&s4);
	strlwr(s4);
	printf("\nusing strlwr() function:\n");
	printf("\nafter conerting string to lowercase s4 is: %s\n",s4);
	
	//using pow() function
	printf("\nEnter a:");
	scanf("%f",&a);
	printf("\nEnter b:");
	scanf("%d",&b);
	c=pow(a,b);
	printf("\nusing pow() function:\n");
	printf("\nResult after using pow() function is: %d\n",c);
	//using sqrt() function
	e=sqrt(a);
	printf("\nusing sqrt() function:\n");
	printf("\nResult after using sqrt() function is: %d\n",e);
	//using ceil function
	f=ceil(a);
	printf("\nusing ceil() function:\n");
	printf("\nResult after using ceil() function  is: %d\n",f);
	//using floor() function
	g=floor(a);
	printf("\nusing floor() function:\n");
	printf("\nResult after using floor() function  is: %d\n",g);
	//using rand() function
	time_t t;
	n=5;
	srand((unsigned) time(&t));
	printf("\nRandom numbers from o to 10 are:\n");
	for(i=0;i<n;i++){
		printf("%d\n",rand() % 10);
	}
	return 0;
}
