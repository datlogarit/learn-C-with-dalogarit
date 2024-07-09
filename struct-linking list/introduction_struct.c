#include<stdio.h>
struct SinhVien{
        char msv[20];
        char ten[30];
        int namsinh;
        int diem;
    };
void nhap(struct SinhVien *sv1){
    printf("nhap thong tin sv\n");
    printf("msv: ");
    fflush(stdin);
    gets(sv1->msv);
    printf("ten: ");
    fflush(stdin);
    gets(sv1->ten);
    printf("nam sinh: ");
    scanf("%d", &sv1->namsinh);
    printf("diem: ");
    scanf("%d", &sv1->diem);
}
void xuat(struct SinhVien sv1){
    printf("thong tin sv: \n");
    printf("msv: %s\n", sv1.msv);
    printf("ten: %s\n", sv1.ten);
    printf("nam sinh: %d\n", sv1.namsinh);
    printf("diem: %d\n", sv1.diem);
}
int main(){
    struct SinhVien sv2;
    nhap(&sv2);
    xuat(sv2);
}
