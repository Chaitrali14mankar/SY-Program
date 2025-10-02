#include <stdio.h>
int main() {
    int a[]={1,3,5},b[]={2,4,6},c[6],i;
    for(i=0;i<3;i++) c[i]=a[i];
    for(int j=0;j<3;j++,i++) c[i]=b[j];
    for(i=0;i<6;i++) printf("%d ",c[i]);
}
