#include <stdio.h>

int main(void) {
    int a, b, c;
    int max, min;

    printf("�п�J�T�ӼƦr : "); 
    scanf_s("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    if (a <= b && a <= c) {
        min = a;
    }
    else if (b <= a && b <= c) {
        min = b;
    }
    else {
        min = c;
    }

    printf("�̤j���Ʀr�O: %d\n�̤p���Ʀr�O: %d\n", max, min);

    return 0;
}
