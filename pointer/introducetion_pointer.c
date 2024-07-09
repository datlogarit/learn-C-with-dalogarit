#include<stdio.h>
int main(){
    int value = 10;
    int *p = &value;
    printf("address of variable 'value' = %d\n", &value);
    printf("p = %d\n", p);
    printf("*p = %d\n", *p);
    printf("address of pointer variable 'p' = %d\n", &p);
}
