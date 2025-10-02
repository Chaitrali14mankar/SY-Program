#include <stdio.h>
int main() {
    int a[]={4,2,7,1,9},n=5,key=7,flag=0;
    for(int i=0;i<n;i++) if(a[i]==key) { flag=1; break; }
    if(flag) printf("Found"); else printf("Not Found");
}
