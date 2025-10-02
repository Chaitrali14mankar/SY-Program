#include <stdio.h>
int main() {
    int a[3][3]={{1,2,3},{0,5,6},{0,0,9}},i,j,flag=1;
    for(i=1;i<3;i++) for(j=0;j<i;j++) if(a[i][j]!=0) flag=0;
    if(flag) printf("Upper Triangular"); else printf("Not");
}
