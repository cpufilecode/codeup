﻿#include <stdio.h>

int main()
{
	int n;
    scanf("%d", &n);
    
    while(n!=0)
    {
        scanf("%d", &n);
        printf("%d\n", n);
        n=n-1;
    }
    
	return 0;
}
