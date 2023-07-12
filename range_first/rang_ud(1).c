#include<stdio.h>

int even(int st,int end){
	int i,j;
	for(i=st;i<=end;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}

}

void main ()
{
	
	int n;
	int m;
	printf("Enter the satrting point :- ");
	scanf("%d",&n);
	printf("Enter the ending point :- ");
	scanf("%d",&m);
	
	even(n,m);
	
}
