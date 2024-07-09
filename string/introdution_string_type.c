#include<stdio.h>
int main(){
    int tuoi;
    char ten[40];
    printf("enter the old: ");
    scanf("%d", &tuoi);
    printf("enter the name: ");
    fflush(stdin);//clear sdtin
    gets(ten);
    printf("old = %d\n", tuoi);
    printf("name = %s", ten);
}
