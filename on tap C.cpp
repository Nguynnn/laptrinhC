#include <stdio.h>
#include <math.h>


int main(){
	int a, b;
	float tong, hieu, dientich, chuvi;
	
	printf("Nhap he so a: ");
	scanf("%d", &a);
	printf("Nhap he so b: ");
	scanf("%d", &b);
	
	
	
	tong=a+b;
	hieu=b-a;
	dientich=a*b;
	chuvi=2*(a+b);
	
	
	printf("Tong hai he so la: %.1f", tong);
	printf("\nHieu hai he so la: %.1f", hieu);
	printf("\nDien tich hinh chu nhat la: %.1f", dientich);
	printf("\nChu vi hinh chu nhat la: %.1f", chuvi);
	
	
	return 0;
}
