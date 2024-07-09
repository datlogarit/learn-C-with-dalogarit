#include<stdio.h>
int main(){
	float a;
	printf("enter average mark = ");
	scanf("%f", &a);
	if(a<0){
		printf("mark is invalid");
	}
	else if(a<5&&a>=0){
		printf("weak mark");
	}
	else if(a>=5&&a<7){
		printf("medium mark");
	}
	else if(a>=7&&a<8){
		printf("good mark");
	}
	else if(a>=8&&a<9){
		printf("very good mark");
	}
	else if(a>=9&&a<=10){
		printf("greate mark");
	}
	else if(a>10){
		printf("invalid mark");
	}
}
