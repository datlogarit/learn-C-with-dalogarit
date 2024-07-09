//the sum of even numbers is less than 100
#include<stdio.h>
int main(){
	int sum = 0;
	printf("the sum of even numbers is less than 100\n");
	for(int i = 0;i<=100; i=i+2){
		sum += i;
	}
	printf("the sum of even numbers is less than 100 is: %d", sum);
}
