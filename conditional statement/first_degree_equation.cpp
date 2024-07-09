#include<stdio.h>

int main(){
	int a, b;
	float x;
	printf("enter 2 number a, b\n");
	printf("enter a = ");
	scanf("%d", &a);
	printf("enter b = ");
	scanf("%d", &b);
	if(a==0){
		if(b!=0){
			printf("equation has no solutin");
		}
		else if(b==0){
			printf("equation with countless solutions");
		}
	}
	else if(a!=0&&b!=0){
		printf("equation has solution x = %f", x= (float)-b/a);
	}
	return 0;
}
