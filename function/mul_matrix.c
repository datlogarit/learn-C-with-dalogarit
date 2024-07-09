#include <stdio.h>

void nhapMaTran(int mat[][10], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void inMaTran(int mat[][10], int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
void tichMatran(int mat1[][10], int mat2[][10], int result[][10], int row1, int col1, int col2 ){
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                result[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
}
int main(){
    int mat1[10][10], mat2[10][10], result[10][10];
    printf("nhap ma tran 1\n");
    int row1, col1, row2, col2;
    printf("nhap rowl1, col1  = ");
    scanf("%d%d", &row1, &col1);
    nhapMaTran(mat1, row1, col1);

    printf("nhap ma tran 1\n");
    printf("nhap rowl2, col2  = ");
    scanf("%d%d", &row2, &col2);
    nhapMaTran(mat2, row2, col2);
    if(col1!=row2){
        printf("khop the nhan 2 matran nay");
        return 1;
    }
    tichMatran(mat1, mat2, result, row1, col1, col2);
    printf("matran1: \n");
    inMaTran(mat1, row1, col1);
    printf("matran2: \n");
    inMaTran(mat2, row2, col2);
    printf("tich hai ma tran: \n");
    inMaTran(result, row1, col2);
    return 0;
}
