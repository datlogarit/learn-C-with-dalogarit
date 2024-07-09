#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
int main(){
	int a[SIZE1][SIZE2]={
		{1, 0, 0, 0, 5},
		{1, 2, 0, 4, 1},
		{1, 1, 3, 1, 1},
		{1, 2, 0, 4, 1},
		{1, 0, 0, 0, 5}
	};
	int b[SIZE1][SIZE2]= {
		{1, 3, 2, 3, 5},
		{2, 3, 2, 2, 2},
		{1, 1, 1, 1, 1},
		{2, 3, 2, 2, 2},
		{3, 3, 3, 3, 3}
	};
	int sum[SIZE1][SIZE2];
	for (int i=0;i<SIZE1;i++){
		for(int j=0;j<SIZE2;j++){
			sum[i][j] = a[i][j]+b[i][j];
		}
	}
	for (int i=0;i<SIZE1;i++){
		for(int j=0;j<SIZE2;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf(" + ");
	for (int i=0;i<SIZE1;i++){
		for(int j=0;j<SIZE2;j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf(" = ");
	for (int i=0;i<SIZE1;i++){
		for(int j=0;j<SIZE2;j++){
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
}
