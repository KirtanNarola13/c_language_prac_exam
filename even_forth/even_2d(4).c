#include <stdio.h>

int main()
{
    int n, m;
	
    printf("Enter the number of columns: ");
    scanf("%d", &n);
	
    printf("Enter the number of rows: ");
    scanf("%d", &m);
	
    int a[n][m];
    int i, j;
    int *ptr[100][100];
	
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("a[%d][%d] => ", i, j);
            scanf("%d", &a[i][j]);
            ptr[i][j] = &a[i][j]; 
        }
    }
	
    printf("\n");
	
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (*ptr[i][j] % 2 == 0) {
                printf("%d\t", *ptr[i][j]);
            }
        }
    }
	
    return 0;
}
