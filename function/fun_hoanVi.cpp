#include<stdio.h>
void HoanVi(float a, float b){
	float temp;
	temp = a;a=b;b=temp;
	printf("x = %f, y = %f", a, b);

}
int main(){

	HoanVi(2, 3);
}
