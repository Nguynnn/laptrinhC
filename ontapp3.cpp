#include<stdio.h>

int main(){
	int a[3] = {1, 2, 3};
	a[0] = 10;
	a[1] = a[1] * 2;
	a[2] =a[2] / 2;
	printf("%d %d %d", a[0], a[1], a[2]);
	
	
	char x[20] = "Nguyen Hoang Nam";
	
	printf(" %s", x);
}
