#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	printf("solve the equation quadratic: ax^2+bx+c = 0\n");
	printf("enter a= ");
	scanf("%d", &a);
	printf("enter b = ");
	scanf("%d", &b);
	printf("enter c = ");
	scanf("%d", &c);
	float delta;
	delta = b*b-4*a*c;
	if(a==0){
		if(b==0&&c!=0)printf("equation hasn't solution''");
		else if(b!=0){
			printf ("equation has unique solution x = %.2f", (float)-c/b);
		}
	}
	else {
		if (delta>0){
			printf("equation has 2 solution x1 = %.2f, x2 = %.2f", (float)((-b-sqrt(delta))/2*a), (float)((-b+sqrt(delta))/2*a));
		}
		else if (delta==0){
			printf("equation has unique solution x1 = x2 = %.2f", (float)(-b/(2*a)));
		}
		else{
			printf("equation hasn't solution");
		}
		
	}
}
