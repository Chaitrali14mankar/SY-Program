#include <stdio.h>
int main() {
    int a[2][2]={{1,2},{2,1}},flag=1,i,j;
    for(i=0;i<2;i++) for(j=0;j<2;j++) if(a[i][j]!=a[j][i]) flag=0;
    if(flag) printf("Symmetric"); else printf("Not");
}
