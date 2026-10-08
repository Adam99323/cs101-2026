#include <stdio.h>

int main() {
    int i = 1900; // output "閏年"
    // int i = 1999; // output "不是閏年"
    // int i = 2020; // output "閏年"
    // int i = 1900; // output "不是閏年"

    if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
        printf("閏年\n");
    }
    else {
        printf("不是閏年\n");
    }

    return 0;
}
