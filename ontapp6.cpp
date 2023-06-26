//chuong trinh con
#include<stdio.h>
//void: khong can tra ra bat cu 
int tong(int x[3]){
	int ketqua = x[0] + x[1] + x[2];
	return ketqua;
}

int main(){
	int x[3] = {1, 2, 3};
	
	int ketqua= tong(x);
	printf("Tong = %d", ketqua);
}
//input: du lieu dau vao
//du lieu dau ra

