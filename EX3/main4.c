#include <stdio.h>

int main() {
    int i = 12; // output "偶數"
    // int i = 3; // output "奇數"

    if (i % 2 == 0) {
        printf("偶數\n");
    }
    else {
        printf("奇數\n");
    }

    return 0;
}
