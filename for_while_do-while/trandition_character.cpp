#include<stdio.h>
int main(){
	char ch;
	printf("enter the character: \n");
	scanf("%c", &ch);
	if(ch>= 'a'&&ch<='z'){
		ch = ch-32;
	}
	else if (ch>='A'&&ch<='Z'){
		ch = ch+32;
	}
	printf("character after conversion is %c", ch);
}
