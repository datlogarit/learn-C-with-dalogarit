//Viết chương trình tìm phần tử có giá trị nhỏ nhất và lớn nhất trong mảng một chiều

#include<stdio.h>
#define max 20
int main(){
    int a[max];
    int *p = &a[0];
    int n;
    printf("nhap vao so phan tu mang: ");
    scanf("%d", &n);
    while(n<0||n>20){

        printf("nhap lai: ");
        scanf("%d", &n);
    }
    for(int i=0;i<n;i++){
        printf("a[%d] = ", i);
        scanf("%d", (p+i));
    }
    int tam;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\t", *(p+i));
    }
    for(int i=0;i<n;i++){
        if(i=n-1){
            printf("\nmin of array is: %d\n", *p);
            printf("max of array is: %d", *(p+i));
            break;
        }
    }
}
