//tim boi chung, uoc chung
#include<stdio.h>
int main(){
	int a, b;
	printf("enter a = ");
	scanf("%d", &a);
	printf("enter b = ");
	scanf("%d", &b);
	int min = a >b ? a:b;
	for(int i = min;i>=1;i--){
		if(a%i==0&b%i==0){
			printf("`ucln` of a and b is %d\n", i);
			printf("`bcnn` of a and b is %d", (a*b)/i);
			break;
		}
	}
	
}
