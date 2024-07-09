//find min element, max element with position
#include<stdio.h>
int main(){
	int a[20];
	int n;
	printf("nhap so phan tu mang: ");
	scanf("%d", &n);
	int min, max;
	for (int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	min = a[0];
	max = a[0];
	int index_min = 0;
	int index_max = 0;
	for (int i=0;i<n;i++){
		if(a[i]<min){
			min = a[i];
			index_min = i;
		}
		if(a[i]>max){
			max = a[i];
			index_max = i;
		}
	}
	printf("min of array is:a[%d]= %d\n", index_min, min);
	printf("max of array is:a[%d]= %d\n", index_max, max);
}
