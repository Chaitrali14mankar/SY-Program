#include <stdio.h>
int main()
{
    int n=98765, count=0;
    for(; n>0; n/=10)
        count++;
    printf("Digits = %d", count);
    return 0;
}
