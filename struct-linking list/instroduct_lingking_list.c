#include "stdio.h"
#include "conio.h"
#include"string.h"
#include"stdlib.h"
typedef struct SV{
        char hoten[20];
        float dtb;
        int tuoi;
        struct SV* next;
} nut;
nut *dau,*cuoi,*p;
void taods()
{
    char chon;
    int stt=0;float x;
    printf("\n NHAP DANH SACH SINH VIEN");
    dau=NULL;
    do {
         p=(nut *)malloc(sizeof(nut));
        printf("\n Nhap thong tin sv thu: %d",++stt);
        printf("\n\tNhap ho va ten: ");fflush(stdin);gets(p->hoten);
        printf("\n\tNhap diem TB: ");scanf("%f",&x);p->dtb=x;
        printf("\n\tNhap tuoi: ");scanf("%d",&p->tuoi);
        if(dau==NULL){dau=p;cuoi=p;}
        else {cuoi->next=p;cuoi=p;}
        p->next==NULL;
        printf("\nCo nhap nua khong:?");
        fflush(stdin);chon=getchar();
        }while (chon!='k');

    }
void xuatds()
{

    int stt=0;
    printf("\n--------DANH SACH SINH VIEN---------");
    printf("\n%-5s%-20s%-7s%-7s","STT","Ho va ten","Tuoi","Diem TB");
    p=dau;
    while (p!=NULL)
    {
        printf("\n%-5d%-20s%-7d%-5.2f",++stt,p->hoten,p->tuoi,p->dtb);
        p=p->next;
    }
    getch();

}
void chen()
{
    char ht[20];float x;
    nut *p_tim;
    p=(nut *)malloc(sizeof(nut));
    printf("\nNhap ho ten sinh vien can chen:");
    fflush(stdin);gets(p->hoten);
    printf("\n Nhap diem TB: ");scanf("%f",&x);p->dtb=x;
    printf("\n NHap tuoi: ");scanf("%d",&p->tuoi);
    printf("\nMuon chen sau ten sinh vien: ");
    fflush(stdin);gets(ht);
    p_tim=dau;
    while (p_tim!=NULL&&strcmpi(p_tim->hoten,ht))
        p_tim=p_tim->next;
    if(p_tim==NULL) printf("\n Khong co ten can tim de chen sau");
    else
    {
      if(p_tim->next==NULL) p_tim->next=p;
      else
      {
          p->next=p_tim->next;
          p_tim->next=p;
      }
      printf("\n Da chen xong!\n");
    }
    getch();
}
void xoa()
{
   char ht[20];nut *p_tim,*p_truoc;
    printf("\nNhap ten sinh vien can xoa:");
    fflush(stdin);gets(ht);
    p_tim=dau;
    while ((p_tim!=NULL)&&(strcmpi(p_tim->hoten,ht)))
    { p_truoc=p_tim;p_tim=p_tim->next;}
    if(p_tim==NULL) printf("\nKhong co sinh vien can xoa");
    else
    {
        if (p_tim->next==NULL) p_truoc->next==NULL;
        else
            if(p_tim==dau) dau=p_tim->next;
            else p_truoc->next=p_tim->next;
    free(p_tim);
    printf("\nDa xoa xong\n");
    }
}

int main()
{
char chon;
do{
    printf("-------------MENU-------------");
    printf("\n1.Tao ds\n2.Xuat ds\n3.Chen\n4.Xoa\n5.Thoat\n");
    fflush(stdin);chon=getchar();
    switch (chon)
        {
        case '1':taods();break;
        case '2':xuatds();break;
        case '3':chen();break;
        case '4':xoa();break;
        }

   }while (chon!='5');
  return 0;
}



