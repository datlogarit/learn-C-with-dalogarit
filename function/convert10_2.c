#include<stdio.h>
int convert2(int n){
    int bitnary[32];
    int i=0;
    while(n>0){
        bitnary[i] = n%2;
        n=n/2;
        i++;
    }
    printf("binary: \n");
    for(int j =i-1;j>=0;j--){
        printf("%d", bitnary[j]);
    }
}
int convert8(int n){
    int octal[32];
    int i=0;
    while(n>0){
        octal[i] = n%8;
        n=n/8;
        i++;
    }
    printf("octal: \n");
    for(int j =i-1;j>=0;j--){
        printf("%d", octal[j]);
    }
}
int convert16(int n){
    int hexa[32];
    int i=0;
    while(n>0){
        hexa[i] = n%16;
        n=n/16;
        i++;
    }
    printf("hexa: \n");
    for(int j =i-1;j>=0;j--){
        printf("%X", hexa[j]);
    }
}
int main(){
    int x;
    printf("enter x in decimal form = ");
    scanf("%d", &x);
    int option;
    while(option!=2 &&option!=8&&option!=16){
        printf("your option convert: (2, 8, 16) ?");
        scanf("%d", &option);
    }
    if(option==2) convert2(x);
    else if(option==8) convert8(x);
    else if(option==16) convert16(x);
    return 0;
}
