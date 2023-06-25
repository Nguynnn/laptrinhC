#include <stdio.h>

// Hàm tính t?ng hai s? th?c
float NAM(float a, float b) {
	float sum = a + b;
    return sum;
}

int main() {
    float NGUYEN; // Bi?n th?c tên bi?n là "NGUYEN"
    float arr[5]; // M?ng s? th?c g?m 5 ph?n t?

    printf("Nhap vao hai so thuc a va b: ");
    scanf("%f%f", &arr[0], &arr[1]); // Nh?p vào hai s? th?c vào ph?n t? d?u tiên c?a m?ng

    NGUYEN = NAM(arr[0], arr[1]); // Gán giá tr? mà hàm tính t?ng du?c vào bi?n th?c

    printf("Gia tri bien thuc NGUYEN: %.2f\n", NGUYEN);

    return 0;
}

