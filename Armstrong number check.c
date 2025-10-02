#include <stdio.h>

#include <math.h>

int main()
{
    int n=153, sum=0, temp=n, r;
    for(; temp>0; temp/=10)
      {
        r=temp%10;
        sum += r*r*r;
      }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
}
