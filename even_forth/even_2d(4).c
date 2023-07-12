#include<stdio.h>

void main ()
{
	int n;
	int m;
	
	printf("Enter the size of colum :- ");
	scanf("%d",&n);
	
	printf("Enter the size of row :- ");
	scanf("%d",&m);
	
	int a[n][m];
	int i,j;
	int *ptr[100][100];
	ptr[100][100]=&a[n][m];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d] => ",i,j);
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(*ptr[i][j]%2==0){
				printf("%d\t",ptr[i][j]);
				
			}
		}
	}
	
}
