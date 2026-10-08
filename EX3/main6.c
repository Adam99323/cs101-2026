#include <stdio.h>

int main() {
    int i = 61; // output "免費"
    // int i = 40; // output "60元"
    // int i = 300; // output "240元"

    if (i <= 30) {
        printf("免費\n");
    }
    else {
        int fee = ((i + 29) / 30) * 30;

        if (fee > 240) {
            fee = 240;
        }
        printf("%d元\n", fee);
    }

    return 0;
}
