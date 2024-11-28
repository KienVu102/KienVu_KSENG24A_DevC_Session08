#include <stdio.h>

int main(){
	int arr[3][3]={{1,2,3},
	               {4,5,6},
				   {7,8,9}}, 
				   sum, j=2;
	printf("Cac duong cheo phu la: ");
	for(int i=0; i<3; i++){
		printf("%d ", arr[i][j]);
		sum += arr[i][j];
		j--;
	}			   
	printf("\nTong cac phan tu theo duong cheo chinh la: %d", sum);			   
    return 0;				   
}
