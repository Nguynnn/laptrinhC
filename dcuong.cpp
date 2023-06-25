#include<stdio.h>

int main(){
	//Yeu cau 1
	printf("Chao truong dai hoc Tai chinh-Ngan hang Ha Noi\n");
	
	//yeu cau 2
	int so1, so2;
	printf("Nhap vao hai so nguyen: ");
	scanf("%d %d", &so1, &so2);
	printf("Hai so nguyen vua nhap la: %d %d\n", so1, so2);
	
	//Yeu cau 3
	float sothapphan;
	printf("Nhap vao so thap phan: ");
	scanf("%f", &sothapphan);
	printf("So thap phan vua nhap la: %.2f\n", sothapphan);
	
	//yeu cau 4
	char kitu;
	printf("Nhap vao mot ki tu: ");
	scanf(" %c", &kitu);
	printf("Ki tu vua nhap la: %c\n", kitu);
	
	
	return 0;
}
