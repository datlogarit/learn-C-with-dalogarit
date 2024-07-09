#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
int main(){
	int sd, sc;
	int a[SIZE1][SIZE2];
	do{
		printf("nhap so dong va so cot: ");
		scanf("%d%d", &sd, &sc);
	}while(sd<1||sd>SIZE1||sc<1||sc>SIZE2);
	//nhap du lieu mang tu ban phhim
	for(int i=0;i<sd;i++)
		for(int j=0;j<sc;j++){
		printf("a[%d][%d] = ", i, j);
		scanf("%d", &a[i][j]);		
	}
	for(int i = 0; i < sd; i++) {
        for(int j = 0; j < sc; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
