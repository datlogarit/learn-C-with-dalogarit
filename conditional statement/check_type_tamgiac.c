#include<stdio.h>
int isTamgiac(a, b, c){
    if(a+b>c&&a+c>b&&b+c>a){
        return 1;
    }
}
int isTamgiacVuong(a, b, c){
    if(a*a + b*b == c*c||a*a + c*c == b*b||c*c + b*b == a*a){
        return 1;
    }
}
int isTamgiacCan(a, b, c){
    if(a== b||a==c||b==c){
        return 1;
    }
}
int isTamgiacDeu(a, b, c){
    if(a==b&&a==c){
        return 1;
    }
}

int main(){
    int x, y, z;
    printf("nhap vao 3 canh cua tam giac: ");
    scanf("%d%d%d", &x, &y, &z);
    if(isTamgiac(x, y, z)){
        if(isTamgiacCan(x, y, z)==1 && isTamgiacVuong(x, y ,z)==1){
            printf("day la tam giac vuong can\n");
            return 0;
        }
        else if(isTamgiacCan(x, y, z))printf("day la tam giac can");
        else if(isTamgiacVuong(x, y, z))printf("day la tam giac vuong");
        else if(isTamgiacDeu(x, y, z))printf("day la tam giac deu");
        else printf("day la tam giac thuong");
    }
    else{
        printf("day khong phai tam giac\n");
    }
    return 0;
}
