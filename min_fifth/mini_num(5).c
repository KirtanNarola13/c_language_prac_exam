#include<stdio.h>

void main ()
{
	int num_1;
	int num_2;
	int num_3;
	int n;
	int i;
	
	printf("Enter first number  :  ");
	scanf("%d",&num_1);
	printf("Enter second number  :  ");
	scanf("%d",&num_2);
	printf("Enter third number  :  ");
	scanf("%d",&num_3);
	
		(num_1<num_2)?(
		(num_1<num_3)?
		printf("Num 1 is minimum number : %d",num_1):printf("Num 3 is minimum number : %d",num_3)
		):((num_2<num_3)?
		printf("Num 2 is minimum number : %d",num_2):printf("Num 3 is minimum number : %d",num_3) 
		);
		
	
}
