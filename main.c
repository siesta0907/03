// 2022-09-20
// 1916513 
// main.c
// chapter 03-3

#include <stdio.h>

int main(void){
	
	int a,b;
	float result;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("�и� �Է��ϼ���: "); 
	scanf("%d", &b);
	result = (float)a/b;
	printf("�������� ����� %f", result);
	return 0;
}
