#include<stdio.h>
#include<math.h>
int main(){
	int a[20];
	int n;
	int sum = 0;
	int count = 0;
	printf("enter the number of array: ");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		if(a[i]>0){
			sum += a[i];
			count += 1;
		}
	}
	
	printf("sum of element better than 0 is: %d\n", sum);
	printf("count of element better than 0 is: %d\n", count);
	printf("avange of element better than 0 is: %.2f", (float)sum/count);
}
