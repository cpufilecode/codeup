#include <stdio.h>
 
int main (void)
{
    int a, b, c, ans;
    float avr;
    
    scanf("%d %d %d", &a, &b, &c);
    ans = a + b + c;
    avr = (float)ans/3;
    
    printf("%d\n",ans);
    printf("%.01f",avr);
    
    return 0;
}
