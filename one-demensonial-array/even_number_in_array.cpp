#include<stdio.h>
int main(){
	int a[20];
	int n;
	printf("enter the number of array: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("nhap so phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("cac phan tu duong cua mang la: \n");
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
		printf("%d\t", a[i]);
	}
}
