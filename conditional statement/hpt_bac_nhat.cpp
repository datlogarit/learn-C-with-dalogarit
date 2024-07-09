#include<stdio.h>
int main(){
	int a, b, c, d, e, f;
	printf("enter a = \n");
	scanf("%d", &a);
	printf("enter b = \n");
	scanf("%d", &b);
	printf("enter c = \n");
	scanf("%d", &c);
	printf("enter d = \n");
	scanf("%d", &d);
	printf("enter e = \n");
	scanf("%d", &e);
	printf("enter f = \n");
	scanf("%d", &f);
	float dt = a*e-b*d;
	float dx = c*e-f*b;
	float dy = c*d-f*a;
	if(dt==0&&dx!=0&dy!=0){
		printf("he vo nghiem");
	} 
	else if(dt==0&&dx==0&dy==0){
		 printf("he vo so nghiem");	
	}
	else{
		 printf("nghiem la x = %f, y = %f", dx/dt, -dy/dt);	
	}
}
