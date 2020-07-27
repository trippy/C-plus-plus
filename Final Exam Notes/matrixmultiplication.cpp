#include<stdio.h>

int main() {
	int n1,m1,n2,m2,i,j,k,sum;
	int a[100][100];
	int b[100][100];
	int prod[100][100];
	printf("Enter the rows and columns of Matrix A with space in between: ");
	scanf("%d",&n1);
	scanf("%d",&m1);
  
	printf("Enter the rows and columns of Matrix B with space in between: ");
	scanf("%d",&n2);
	scanf("%d",&m2);
  
	printf("Matrix A:\n");
	for(i = 0;i<n1;i++){
		 for(j =0;j<m1;j++){
			  scanf("%d",&a[i][j]);
		 }
	}
  
	printf("Matrix B:\n");
	for(i = 0;i<n2;i++){
		 for(j =0;j<m2;j++){
			  scanf("%d",&b[i][j]);
		 }
	}
  
	for (i = 0; i < n1; i++) {
		 for (j = 0; j < m2; j++) {
			  sum = 0;
			  for (k = 0; k < n2; k++) {
					sum += a[i][k] * b[k][j];
			  }
			  prod[i][j] = sum;
		 }
	}
  
	printf("\n\nProduct AxB:\n");
	for (i = 0; i < n1; i++) {
		 for (j = 0; j < m2; j++) {
			  printf("%d ",prod[i][j]);
		 }
		 printf("\n");
	 }
	return 0;
}