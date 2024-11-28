#include <stdio.h>

int main(){
	int arr[3][3]={{1,2,3},
	               {4,5,6},
				   {7,8,9}}, 
				   sum;
	printf("Cac duong cheo chinh la: ");
	for(int i=0; i<3; i++){
		printf("%d ", arr[i][i]);
		sum += arr[i][i];
	}			   
	printf("\nTong cac phan tu theo duong cheo chinh la: %d", sum);			   
    return 0;				   
}
