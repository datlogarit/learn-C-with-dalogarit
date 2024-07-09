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
	for (int i=0;i<n;i++){
		if(a[i]<0){
			a[i]=0;
		}
		printf("a[%d] = %d\t", i, a[i]);
		
	}
}
