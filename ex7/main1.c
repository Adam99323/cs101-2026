/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
    
    int n;
    printf("歡迎光臨長庚樂透購買機台\n");
    printf("請問您要購買機組樂透\n");
    scanf("%d", &n);
    if (n < 1 || n > 5) {
        printf("請輸入1~5\n");
        return 1;
    }
    
FILE *fp = fopen("lotto.txt", "w");
if (fp == NULL) return 1;
    
srand((unsigned)time(NULL));
time_t now = time(NULL);
char *t = ctime(&now);
t[strlen(t) - 1] = '\0';

fprintf(fp, "======== lotto649 ========\n");
fprintf(fp, "= %s =\n", t);

 for (int i = 1; i <= 5; i++) {
        fprintf(fp, "[%d]: ", i);
        if (i <= n) {
            int used[70] = {0};
            for (int j = 0; j < 7; j++) {
                int k;
                do {
                    k = rand() % 69 + 1;
                } while (used[k]);
                used[k] = 1;
                fprintf(fp, "%02d ", k);
            }
        } else {
            for (int j = 0; j < 7; j++)
                fprintf(fp, "-- ");
        }
        fprintf(fp, "\n");
    }

    fprintf(fp, "======== csie@CGU =========\n");
    fclose(fp);

    printf("以為您購買的 %d 組樂透組合輸出至 lotto.txt\n", n);
    return 0;
}