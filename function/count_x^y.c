//Tạo hàm để tính giá trị của x^y
#include<stdio.h>
int count(int a, int b){
    int result = 1;
    int i;
    for(i=0;i<b;i++){
        result = result*a;
    }
    return result;
}
int main(){
    int x, y;
    printf("enter x: ");
    scanf("%d", &x);
    printf("enter y: ");
    scanf("%d", &y);
    printf("x^y = %d", count(x, y));
}
