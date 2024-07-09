#include<stdio.h>
#define max 20
int main(){
	int a[max];
	int n, tg;
	do {
		printf("enter the number of array: ");
		scanf("%d", &n);
	}while (n<1||n>20);
	//nhap du lieu cho mang
	for (int i=0;i<n;i++){
		printf("phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	for (int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j]){
				tg = a[i];a[i]=a[j];a[j]=tg;
			}
		printf("mang sau xap xep la: ");
	//xuat du lieu cho mang
	for (int i=0;i<n;i++){
		printf("a[%d] = %d\t",i ,a[i]);
	}
}
