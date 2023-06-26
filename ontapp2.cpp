#include<stdio.h>

int main(){
	int namsinh = 2004;
	printf("Nhap nam sinh: ");
	scanf("%d", &namsinh);
	
	int tuoi = 2023 - namsinh;
	
	for(int i = 1; i <= 10; i++){
		printf("%d. Nam nay toi %d tuoi.\n", i, tuoi);
	}
	
	
	
	
}
