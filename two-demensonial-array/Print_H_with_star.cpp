//su dung mang 2 chieu de ve chu H bang dau *s
#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
int main(){
	int a[SIZE1][SIZE2]={
		{ 1, 0, 0, 0, 1},
		{ 1, 0, 0, 0, 1},
		{ 1, 1, 1, 1, 1},
		{ 1, 0, 0, 0, 1},
		{ 1, 0, 0, 0, 1}
	};
	for(int i=0;i<SIZE1;i++){
		for(int j=0;j<SIZE2;j++)
			if(a[i][j]==1){
				printf("*");
			} 
			else{
				printf(" ");
			} 
		printf("\n");
	}
}
