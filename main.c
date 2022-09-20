// 2022-09-20
// 1916513 
// main.c
// chapter 03-3

#include <stdio.h>

int main(void){
	
	int a,b;
	float result;
	
	printf("분자를 입력하세요 : ");
	scanf("%d", &a);
	printf("분모를 입력하세요: "); 
	scanf("%d", &b);
	result = (float)a/b;
	printf("나누기의 결과는 %f", result);
	return 0;
}
