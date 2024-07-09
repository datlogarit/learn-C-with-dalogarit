#include<stdio.h>
int main(){
	int a;
	printf("enter a = ");
	scanf("%d", &a);
	switch (a)
	{
		case 1: {
			printf("One");
			break;
		}
		case 2: {
			printf("Two");
			break;
		}
		case 3:{
			printf("Three");
			break;
		}
		default:{
			printf("Wrong syntax");
			break;
		}
	}
}
