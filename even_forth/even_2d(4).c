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
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d] => ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]%2==0){
				printf("%d\t",a[i][j]);
				
			}
		}
	}
	
}
