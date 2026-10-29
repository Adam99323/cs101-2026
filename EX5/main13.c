#include <stdio.h>

void multi(int i, int j) {
    if (j == i) {
        printf("%d*%d=%d\n", i, j, i * j);
        return;
    }
    multi(i, j - 1);
    printf("%d*%d=%d\n", i, j, i * j);
}

int main() {
    multi(1, 9);
    return 0;
}