// 2022/09/20
// IT공학전공 1916513 박희수 
// main.c
// chapter 03 실습 2

#include <stdio.h>

int main(void){
	
	char c;
	int i;
	printf("input a number :");
	scanf("%c", &c);
	i = c - '0';
	printf("The input number is %i\n", i);
	return 0;
}
