#include <stdio.h>

int main(){
	//mostNumbers: mn
	int numbers[10] = {3, 7, 1, 7, 2, 7, 9, 4, 10, 6}, mN, count, a;
	for(int i = 0; i < 6; i++){
		count = 0;
		for(int j = 0; j < 11; j++){
			if(numbers[i] == numbers[j]){
				count++;
			}
			if(count >= 2){
				mN = numbers[i];
			}
		}
	}
	printf("Phan tu xuat hien nhieu nhat la: %d\n", mN);
	return 0;
}
