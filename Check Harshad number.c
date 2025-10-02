#include <stdio.h>
int main() {
    int n=18,temp=n,sum=0;
    for(;temp>0;temp/=10) sum+=temp%10;
    if(n%sum==0) printf("Harshad");
    else printf("Not Harshad");
}
