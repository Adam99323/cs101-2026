/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct Books {
    int id;
    int price;
    char title[100];
} book_t;

void total_price(book_t books[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += books[i].price;
    printf("總共價錢：%d\n", sum);
}

void list_books(book_t books[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d\t%d\t%s\n", books[i].id, books[i].price, books[i].title);
}

int main() {
    book_t books[6] = {
        {1, 1000, "All the Light We Cannot See"},
        {2, 300,  "The 38 Letters from J.D. Rockefeller to his son"},
        {3, 1000, "The Ballad of Songbirds and Snakes"},
        {4, 550,  "Killers of the Flower Moon"},
        {5, 870,  "Elon Musk"},
        {6, 1344, "Milk and Honey 12-Month 2024"}
    };

    FILE *fp = fopen("Book.bin", "wb");
    if (fp == NULL) return 1;
    fwrite(books, sizeof(book_t), 6, fp);
    fclose(fp);

    list_books(books, 6);
    total_price(books, 6);
    return 0;
}