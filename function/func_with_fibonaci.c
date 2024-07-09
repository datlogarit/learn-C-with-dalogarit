#include<stdio.h>
int fibonaci(n){
    int a[n];
    int i;
    a[0] = 1;
    a[1] = 1;
    printf("1\t");
    printf("1\t");
    for(i=2;i<n;i++){
        a[i] = a[i-1]+a[i-2];
        printf("%d\t", a[i]);
    }

}
int main(){
    int x;
    printf("nhap vao so ptu trong day so: ");
    scanf("%d", &x);
    printf("day fibonaci: \n");
    fibonaci(x);
}
