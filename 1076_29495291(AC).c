#include <stdio.h>

int main()
{
	char x, t='a';
    scanf("%c", &x);
    
    while(x+1 !=t) {
        printf("%c\n", t);
        t++;
    } 
    
	return 0;
}
