#include<stdio.h>
int main(){
	int a[20];
	int n;
	printf("enter the number of array");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	//xuat du lieu cho mang
	for (int i=n-1;i>=0;i--){
		printf("%d\t", a[i]);
	}
}
