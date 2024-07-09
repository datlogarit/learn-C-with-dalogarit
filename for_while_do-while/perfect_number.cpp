//so hoan hao
#include<stdio.h>
int main(){
	int a;
	printf("enter a= ");
	scanf("%d", &a);
	int sum;
	for(int i = 1; i<a;i++){
		if(a%i==0){
			sum +=i;
		}
	}
	if(sum==a) printf("perfect number");
	else printf("isn't perfect number");
}
