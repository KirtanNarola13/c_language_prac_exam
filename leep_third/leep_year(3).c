#include<stdio.h>

int main ()
{

	int st;
	int end;
	
	printf("Enter the starting year :- ");
	scanf("%d",&st);
	
	printf("Enter the ending year :- ");
	scanf("%d",&end);
	
	FILE *ptr;
	int leepyear[100];
	
	int j;
	
	
	ptr = fopen("leep_yr.txt","w");
	
	if(ptr == NULL){
		printf("File can't created...'");
	}
	
	for(j=st;j<=end;j++){
		if(j%4==0){
			
		fprintf(ptr,"%d\t",j);
		}
		
	}
	return 0;
}
