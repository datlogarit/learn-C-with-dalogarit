#include<stdio.h>
#define max 20
int main(){
	printf("nhap xuat phan tu cua mang\n");
	int a[max];
	int n;
	do {
		printf("enter the number of array: ");
		scanf("%d", &n);
	}while (n<1||n>20);
	//nhap du lieu cho mang
	for (int i=0;i<n;i++){
		printf(" a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	//xuat du lieu cho mang
	for (int i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
}
