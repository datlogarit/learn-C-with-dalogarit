#include<stdio.h>
struct SinhVien{
    char hoten[30];
    char que[30];
    char gioitinh[10];
    float tongdiem;
};
struct SinhVienNu{
    struct SinhVien sinhvien;
    float diemhat;
    float diemmua;
}SVNu[20];
struct SinhVienNam{
    struct SinhVien sinhvien;
    float diemtheduc;
    float diemtin;
}SVNam[20];
void main(){
    int n;
    do{
        printf("so sv nam can nhap: \n");
        scanf("%d", &n);
    }while(n>20||n<0);
    for (int i = 0;i<n;i++){
        printf("nhap thong tin cho sv nam thu %d\n", i);
        printf("nhap ho ten: ");
        fflush(stdin);
        gets(SVNam[i].sinhvien.hoten);
        printf("que: ");
        gets(SVNam[i].sinhvien.que);
        printf("gioi tinh: ");
        gets(SVNam[i].sinhvien.gioitinh);
        printf("diem: ");
        scanf("%f", &SVNam[i].sinhvien.tongdiem);
        printf("diem the duc: ");
        scanf("%f", &SVNam[i].diemtheduc);
        printf("diem tin: ");
        scanf("%f", &SVNam[i].diemtin);
    }
    int nu;
    do{
        printf("so sv nu can nhap: ");
        scanf("%d", &nu);
    }while(nu>20||nu<0);
    for (int i = 0;i<nu;i++){
        printf("nhap thong tin cho sv nu thu %d\n", i);
        printf("nhap ho ten: ");
        fflush(stdin);
        gets(SVNu[i].sinhvien.hoten);
        printf("que: ");
        gets(SVNu[i].sinhvien.que);
        printf("gioi tinh: ");
        gets(SVNu[i].sinhvien.gioitinh);
        printf("diem: ");
        scanf("%f", &SVNu[i].sinhvien.tongdiem);
        printf("diem hat: ");
        scanf("%f", &SVNu[i].diemhat);
        printf("diem mua: ");
        scanf("%f", &SVNu[i].diemmua);
    }
////print the list boy student
    printf("HoTen\t");
    printf("Que\t");
    printf("GioiTinh\t");
    printf("Diem\t");
    printf("DiemTheDuc\t");
    printf("DiemTin\n");
    for (int i =  0; i< n; i++){
        printf("%s\t%s\t%8s\t%.2f\t%10.2f\t%.2f", SVNam[i].sinhvien.hoten, SVNam[i].sinhvien.que, SVNam[i].sinhvien.gioitinh, SVNam[i].sinhvien.tongdiem, SVNam[i].diemtheduc, SVNam[i].diemtin);
    }
//print the list girl student
    printf("\nHoTen\t");
    printf("Que\t");
    printf("GioiTinh\t");
    printf("Diem\t");
    printf("DiemMua\t");
    printf("DiemHat\n");
    for (int i =  0; i< nu; i++){
        printf("%s\t%s\t%8s\t%.2f\t%7.2f\t%.2f", SVNu[i].sinhvien.hoten, SVNu[i].sinhvien.que, SVNu[i].sinhvien.gioitinh, SVNu[i].sinhvien.tongdiem, SVNu[i].diemmua, SVNu[i].diemhat);
    }
}
