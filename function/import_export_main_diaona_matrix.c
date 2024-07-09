#include<stdio.h>
#define max 20

void nhapMaTran(int a[max][max],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void inCheoChinh(int a[max][max], int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]) printf("%d\t", a[i][j] );
            else printf(" ");
        }
        printf("\n");
    }
}
int tongCheoChinh(int a[max][max], int n) {
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==a[j]) sum = sum+a[i][j];
        }
    }
    return sum;
}
void inCheoPhu(int a[max][max], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                printf("%d\t", a[i][j]);
            }
            else printf(" ");
        }
        printf("\n");
    }
}
int tongCheoPhu(int a[max][max], int n) {
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1) sum = sum+a[i][j];
        }
    }
    return sum;
}
int main(){
    int arr[max][max];
    int hs;
    printf("nhap vao so dong, so cot cua ma tran vuong: ");
    scanf("%d", &hs);
    nhapMaTran(arr, hs);
    printf("a;cac phan tu tren duong cheo chinh\n");
    inCheoChinh(arr, hs);
    printf("b;cac phan tu tren duong cheo phu\n");
    inCheoPhu(arr, hs);
    printf("c;tong cac phan tu tren duong cheo chinh: ");
    int tongcc = tongCheoChinh(arr, hs);
    printf("%d", tongcc);
    printf("\nd;tong cac phan tu tren duong cheo phu: ");
    int tongcp = tongCheoPhu(arr, hs);
    printf("%d", tongcp);



}
