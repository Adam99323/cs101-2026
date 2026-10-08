#include <stdio.h>

int main() {
    int i = 8; // 否
    // int i = 8; // 是

    if (i > 0 && (i & (i - 1)) == 0) {
        printf("是\n");
    }
    else {
        printf("否\n");
    }

    return 0;
}
