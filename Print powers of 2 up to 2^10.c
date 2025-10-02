#include <stdio.h>
int main() {
    int pow=1;
    for(int i=1; i<=10; i++) {
        pow *= 2;
        printf("2^%d = %d\n", i, pow);
    }
    return 0;
}
