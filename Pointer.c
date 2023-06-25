#include <stdio.h>

int main() {
    int sayi1, sayi2;
    int *ptr1, *ptr2;

    sayi1 = 10;
    sayi2 = 20;

    ptr1 = &sayi1;
    ptr2 = &sayi2;

    printf("sayi1 degeri: %d\n", *ptr1);
    printf("sayi2 degeri: %d\n", *ptr2);

    return 0;
}
