#include<stdio.h>
int main(){
	int a[20];
	int n;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	int x;
	int count=0;
	printf("ban muan tim so lan xh cua phan tu: ");
	scanf("%d", &x);
	for (int i=0;i<n;i++){
		if(a[i]==x)count++;
	}
	printf("%d xuat hien %d lan", x, count);
}
