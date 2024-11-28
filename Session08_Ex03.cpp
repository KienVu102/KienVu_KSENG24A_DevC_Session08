#include <stdio.h>

int main(){
	int n;
	printf("Ban hay nhap 1 so nguyen: ");
	scanf("%d", &n);
	int arr[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i][j] = n;
		}
	} 
	for(int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0; 
} 
