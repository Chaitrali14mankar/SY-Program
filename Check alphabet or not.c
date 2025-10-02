#include <stdio.h>
int main() {
    char c = 'A';
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Alphabet");
    } else {
        printf("Not Alphabet");
    }
    return 0;
}
