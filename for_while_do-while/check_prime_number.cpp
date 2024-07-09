#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	printf("enter a = ");
	scanf("%d", &a);
	if(a<2&&a>=0){
		printf("KNT");
	}
	else{
		for(int i = 2;i*i<= a;i++){
			if(a%i==0){
				printf("KNT\n");
				//break - thoát khoi vong loop
				exit(0);//hàm thoát khoi ctrinh
			}
			else{
				continue;
			}
		}
		printf("NT");
	}
	
}
