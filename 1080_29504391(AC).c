#include <stdio.h>

int main()
{
    int a,sum,i = 0;
    scanf("%d", &a);
    
    while(sum < a) {
        i++;
        sum = sum + i;
    }
    printf("%d", i);
    
	return 0;
}
