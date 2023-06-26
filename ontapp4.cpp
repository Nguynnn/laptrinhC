//chuong trinh con
#include<stdio.h>

void print(int x[3]){
	for(int i = 0; i <= 2; i++){
		printf("%d", x[i]);
	}
}

int main(){
	int x[3] = {1, 2, 3};
	
	print(x);
}
//input: du lieu dau vao
//du lieu dau ra

