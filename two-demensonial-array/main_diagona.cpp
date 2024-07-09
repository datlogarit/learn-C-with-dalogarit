#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
int main(){
	int a[SIZE1][SIZE2]={
		{ 1, 0, 0, 0, 5},
		{ 1, 2, 0, 4, 1},
		{ 1, 1, 3, 1, 1},
		{ 1, 2, 0, 4, 1},
		{ 1, 0, 0, 0, 5}
	};
	for(int i=0;i<SIZE1;i++){
		for(int j=0;j<SIZE2;j++)
			if(i==j){
				printf("%d", a[i][j]);
			} 
			else if(i+j==SIZE1-1) printf("%d", a[i][j]);
			else{
				printf(" ");
			} 
		printf("\n");
	}
}
