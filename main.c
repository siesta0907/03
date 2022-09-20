// 2022-09-20
// 1916513 
// main.c
// chapter 03-3

#include <stdio.h>

int main(void){
	
	char c;
	int i;
	printf("input a character : ");
	scanf("%c", &c);
	i = c;
	printf("The next character of %c (%d) is  %c (%d)%\n", c,i,c+1,i+1);
	return 0;
}
