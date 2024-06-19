#include <stdio.h>

void printChar(char *str, int index) {
    if (str[index] == '\0') return;
    putchar(str[index]);
    printChar(str, index + 1);
}

void printNested(char *str, int outer, int inner) {
    if (outer == 0) return;
    if (inner > 0) {
        printNested(str, outer, inner - 1);
    } else {
        printChar(str, 0);
        putchar('\n');
        printNested(str, outer - 1, outer - 1);
    }
}

int main() {
    char str[] = "Waking up every day feels like living inside a nested recursion!";
    printNested(str, 1, 1);
    return 0;
}
