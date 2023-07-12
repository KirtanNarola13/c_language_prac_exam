#include<stdio.h>

void main ()
{

	int n;
	printf("Enter the size of array :- ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++){
		printf("a[%d] => ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		a[i] = a[i] * a[i];
		printf("%d\t",a[i]);
	}
	
}
