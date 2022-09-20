// 2022/09/20
// IT공학전공 1916513 박희수 
// main.c
// chapter 03 실습1 

#include <stdio.h>

int main(void){
	
	int input_int;
	float input_float;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &input_int);
	
	printf("실수를 입력하세요: ");
	scanf("%f", &input_float);
	
	printf("정수: %d, 실수: %f\n ", input_int, input_float);
	
	return 0;
}
