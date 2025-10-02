#include <stdio.h>
int main() {
    int a[]={10,20,4,45,99},n=5,i,j,t;
    for(i=0;i<n-1;i++) for(j=0;j<n-i-1;j++) if(a[j]>a[j+1]){ t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
    printf("%d",a[n-2]);
}
