
#include <stdio.h>

int main(void){
	char c, c1;
	
	printf("enter a character : ");
	scanf("%c", &c);
	
	
	c1= c + 1;
	printf("The next character of %c (%d) is %c (%d)\n",c, c, c1, c1);
	
	return 0;

}