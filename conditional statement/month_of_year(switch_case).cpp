#include<stdio.h>
int main(){
	int a;
	int n;
	printf("enter month of year = ");
	scanf("%d", &a);
	
	switch (a){
		case 1:{
			printf("this month has 31 days");
			break;
		}
		case 2:{
			printf("enter year = ");
			scanf("%d", &n);
			if(n%4==0){
				printf("this month has 29 days");
				if(n%100==0){
					printf("this month has 28 days");
					}
					if(n%400==0){
						printf("this month has 29 days");
					}
				}
			else{
				printf("this month has 28 days");
			}
			break;
		}
		case 3:{
			printf("this month has 31 days");
			break;
		}
		case 4:{
			printf("this month has 30 days");
			break;
		}
		case 5:{
			printf("this month has 31 days");
			break;
		}
		case 6:{
			printf("this month has 30 days");
			break;
		}
		case 7:{
			printf("this month has 31 days");
			break;
		}
		case 8:{
			printf("this month has 31 days");
			break;
		}
		case 9:{
			printf("this month has 30 days");
			break;
		}
		case 10:{
			printf("this month has 31 days");
			break;
		}
		case 11:{
			printf("this month has 30 days");
			break;
		}
		case 12:{
			printf("this month has 31 days");
			break;
		}
		default:{
			printf("have to type month of year");
			break;
		}
	}
}
