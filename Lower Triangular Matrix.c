#include <stdio.h>
int main() {
    int a[3][3]={{1,0,0},{4,5,0},{7,8,9}},i,j,flag=1;
    for(i=0;i<3;i++) for(j=i+1;j<3;j++) if(a[i][j]!=0) flag=0;
    if(flag) printf("Lower Triangular"); else printf("Not");
}
v
