#include <stdio.h>
int main() {
    char c = '5';
    if (c >= '0' && c <= '9') {
        printf("Digit");
    } else {
        printf("Not Digit");
    }
    return 0;
}
