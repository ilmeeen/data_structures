#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

// Definisi struktur stack
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

// Fungsi push, untuk menambahkan karakter ke dalam stack
void push(Stack *s, char c) {
    s->top++;
    s->data[s->top] = c;
}

// Fungsi pop, untuk mengeluarkan karakter dari stack
char pop(Stack *s) {
    char c = s->data[s->top];
    s->top--;
    return c;
}

// Fungsi untuk reverse string
void reverseString(char* str) {
    Stack s;
    s.top = -1;
    int i;

    // Memasukkan karakter-karakter ke dalam stack
    for (i = 0; i < strlen(str); i++) {
        push(&s, str[i]);
    }

    // Mengeluarkan karakter-karakter dari stack untuk membentuk string yang sudah terbalik
    for (i = 0; i < strlen(str); i++) {
        str[i] = pop(&s);
    }
}

// Program utama
int main() {
    char str[MAX_SIZE];
    printf("Masukkan string: ");
    gets(str);

    // Memanggil fungsi untuk reverse string
    reverseString(str);

    printf("String setelah dibalik: %s", str);
    return 0;
}

// Pada program di atas, terdapat dua fungsi yaitu push dan pop yang digunakan untuk menambahkan karakter ke dalam stack dan mengeluarkan karakter dari stack. 
// Kemudian, terdapat fungsi reverseString yang digunakan untuk membalikkan string dengan menggunakan stack. 
// Fungsi ini bekerja dengan memasukkan karakter-karakter dari string ke dalam stack, kemudian mengeluarkan karakter-karakter tersebut untuk membentuk string yang sudah terbalik.
