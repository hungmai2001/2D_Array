#include <stdio.h>
//# define _CRT_SECURE_NO_WARNINGS
void NhapMang(int a[][50], int &hang, int &cot);
void Xuatmang(int a[][50], int hang, int cot);
void TimKiem(int a[][50], int hang, int cot, int &element);
void Tong(int a[][50], int hang, int cot);
void TongDong(int a[][50], int hang, int cot);
void TongCot(int a[][50], int hang, int cot);
void Max(int a[][50], int hang, int cot);
void Min(int a[][50], int hang, int cot);

int main() {
	int a[50][50];
	int hang, cot, element;
	NhapMang(a, hang, cot);
	Xuatmang(a, hang, cot);
	TimKiem(a,hang,cot,element);
	Tong(a, hang, cot);
	Max(a, hang, cot);
	Min(a, hang, cot);
	return 0;
}

void NhapMang(int a[][50], int &hang, int& cot) {
	printf("Nhap so hang: ");
	scanf("%d", &hang);
	printf("Nhap so cot: ");
	scanf("%d", &cot);
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			printf("A[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void Xuatmang(int a[][50], int hang, int cot) {
	printf("Mang A: \n");
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void TimKiem(int a[][50], int hang, int cot, int &element) {
	printf("Nhap phan tu can tim: ");
	scanf("%d", &element);
	int count = 0;
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			if (a[i][j] == element) {
				printf("%d duoc tim thay o hang so %d va cot so %d\n", element, i,j);
				break;
			}
			else
				count++;
		}
	}
	if(count == hang*cot)
		printf("%d khong duoc tim thay", element);
}
void Tong(int a[][50], int hang, int cot){
	char choose;
	printf("Ban muon tinh tong dong hay cot (d or c): ");
	scanf(" %c", &choose);
	switch (choose) {
		case 'd':
		case 'D':
			TongDong(a, hang, cot);
			break;
		case 'c':
		case 'C':
			TongCot(a, hang, cot);
			break;
		default: 
			printf("Ban nhap sai roi!\n");
	}
}
void TongDong(int a[][50],int hang, int cot) {
	int sum =0;
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			sum += a[i][j];
		}
		printf("Tong dong thu %d la: %d \n", i, sum);
		sum = 0;
	}
}
void TongCot(int a[][50], int hang, int cot) {
	int sum = 0;
	for (int i = 0; i <cot; i++) {
		for (int j = 0; j < hang; j++) {
			sum += a[j][i];
		}
		printf("Tong dong cot %d la: %d \n", i, sum);
		sum = 0;
	}
}
void Max(int a[][50], int hang, int cot) {
	int max = a[0][0];
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	printf("Gia tri lon nhat la: %d \n", max);
}
void Min(int a[][50], int hang, int cot) {
	int min = a[0][0];
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			if (a[i][j] < min)
				min = a[i][j];
		}
	}
	printf("Gia tri nho nhat la: %d \n", min);
}