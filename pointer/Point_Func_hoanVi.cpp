#include<stdio.h>
void HoanVi(float *a, float *b){
	float tam;
	tam = *a;*a= *b;*b= tam;
	printf("x = %f, y = %f", *a, *b);
}
int main(){
	float x= 3.5, y= 7;
	HoanVi(&x, &y);
}
