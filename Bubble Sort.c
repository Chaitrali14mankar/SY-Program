#include <stdio.h>
int main() {
    int a[5]={5,3,1,4,2},i,j,t;
    for(i=0;i<5-1;i++)
        for(j=0;j<5-i-1;j++)
            if(a[j]>a[j+1]) { t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
    for(i=0;i<5;i++) printf("%d ",a[i]);
}
