#include <stdio.h>

void hanoi(int n, char from, char temp, char to);

int main(void) {
    int n = 2;

    hanoi(n, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, char from, char temp, char to) {
    if (n == 0) return;

    hanoi(n - 1, from, to, temp);

    printf("dia %d di chuyen tu %c sang %c\n", n, from, to);

    hanoi(n - 1, temp, from, to);
}
