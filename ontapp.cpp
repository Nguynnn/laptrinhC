#include<stdio.h>

int main(){
	int namsinh = 2004;
	float cannang = 67.5;
	printf("Nhap lan luot nam sinh va can nang: ");
	scanf("%d%f", &namsinh, &cannang);
	
	int tuoi = 2023 - namsinh;
	
	
	printf("Nam nay toi %d tuoi. Toi nang %.1f kg", tuoi, cannang);
	
	if(tuoi >= 18){
		printf("\nDa du tuoi di tu");
	}
	else{
		printf("Chua du tuoi di tu");
	}
}
