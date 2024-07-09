#include<stdio.h>
int main(){
    int n;
    int arr[10];
    int* p = &arr[0];
    printf("number of element of array: ");
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        printf("a[%d] = ", i);
        scanf("%d", (p+i));
    }
    for(int i = 0;i<n;i++){
        printf("%d\t", *(p+i));
    }
    return 0;
}
