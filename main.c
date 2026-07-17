#include <stdio.h>

int main() {
    char c, h;

    printf("enter a character : ");
    scanf("%c", &c);

    h = c + 1;
    
    printf("the next character of %c (%i) is %c (%i).\n", c, c, h, h);

    return 0;
}
