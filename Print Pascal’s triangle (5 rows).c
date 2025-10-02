#include <stdio.h>
int main() {
    int coef;
    for(int i=0;i<5;i++) {
        coef=1;
        for(int j=0;j<=i;j++) {
            printf("%d ",coef);
            coef=coef*(i-j)/(j+1);
        }
        printf("\n");
    }
}
