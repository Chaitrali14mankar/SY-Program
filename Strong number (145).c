#include <stdio.h>

int fact(int x) 
{ int f=1; for(int i=1;i<=x;i++) f*=i; return f; }

int main() 
{
    int n=145,sum=0,temp=n;
    for(;temp>0;temp/=10) sum+=fact(temp%10);
    if(sum==n) printf("Strong");
    else printf("Not Strong");
}
