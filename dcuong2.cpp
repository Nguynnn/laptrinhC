#include <stdio.h>

// H�m t�nh t?ng hai s? th?c
float NAM(float a, float b) {
	float sum = a + b;
    return sum;
}

int main() {
    float NGUYEN; // Bi?n th?c t�n bi?n l� "NGUYEN"
    float arr[5]; // M?ng s? th?c g?m 5 ph?n t?

    printf("Nhap vao hai so thuc a va b: ");
    scanf("%f%f", &arr[0], &arr[1]); // Nh?p v�o hai s? th?c v�o ph?n t? d?u ti�n c?a m?ng

    NGUYEN = NAM(arr[0], arr[1]); // G�n gi� tr? m� h�m t�nh t?ng du?c v�o bi?n th?c

    printf("Gia tri bien thuc NGUYEN: %.2f\n", NGUYEN);

    return 0;
}

