#include <stdio.h>

int main(){
	int max, arr[2][3]={{1,2,3},{4,5,6}};
	max=arr[0][0];
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat co trong mang la: %d", max);
	return 0;
}
