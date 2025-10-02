#include <stdio.h>
int main() {
    int n = -8;
    if (n < 0) {
        n = -n;
    }
    printf("%d", n);
    return 0;
}
