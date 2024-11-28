#include <stdio.h> 

int main(){
	int arr[5]={1,2,3,4,5}, n, count=0;
	printf("Ban hay nhap 1 phan tu: ");
	scanf("%d", &n);
	for(int i=0; i<=5; i++){
		if(n==arr[i]){
			count=1; 
			printf("Vtri phan tu trong mang la: %d", i+1); 
		} 
	} 
	if(count!=1){
		printf("Phan tu nay khong co trong mang"); 
	} 
	
	return 0; 
} 
