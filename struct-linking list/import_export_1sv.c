#include <stdio.h>
#include <conio.h>
int main(){
    typedef struct {
        char xa[20], huyen[20], tinh[20];
    }que_quan;
    struct sinh_vien{
        char ho_ten[30];
        int tuoi;
        float diem;
        que_quan dia_chi;
    } sv;
    float x;
    printf("Nhap thong tin ve sinh vien\n");
    printf("Nhap ho ten sinh vien\n");
    fflush(stdin);
    gets(sv.ho_ten);
    printf("Nhap tuoi sinh vien\n");
    scanf("%d", &sv.tuoi);
    printf("Nhap diem trung binh sinh vien\n");
    scanf("%f",&sv.diem);
    printf("Nhap dia chi sinh vien\n");
    printf("Nhap xa:");
    fflush(stdin);
    gets(sv.dia_chi.xa);
    printf("Nhap huyen:"); gets(sv.dia_chi.huyen);
    printf("Nhap tinh:"); gets(sv.dia_chi.tinh);
    printf("thong tin sinh vien\n");
    printf("Ho ten \t tuoi \t dtb \t dia chi\n");
    printf("%6s \t %d \t %f \t %s, %s, %s",sv.ho_ten, sv.tuoi,
    sv.diem, sv.dia_chi.xa, sv.dia_chi.huyen, sv.dia_chi.tinh);
    return 0;
    //getch();
}
