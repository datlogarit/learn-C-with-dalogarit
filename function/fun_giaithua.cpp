#include<stdio.h>
int giaiThua(int n){
    int giaiThua = 1;
	for(int i = 1;i<=n;i++){
		giaiThua = giaiThua * i;
	}
	return giaiThua;

}

int main(){
	int tong = 0;
	int n;
	printf("enter n: ");
	scanf("%d", &n);
	for(int i = 1;i<=n;i++){
		tong = tong + giaiThua(i);
	}
	printf("tong = %d", tong);

}
