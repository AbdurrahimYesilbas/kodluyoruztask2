#include <stdio.h>

unsigned long long faktoriyel(unsigned int sayi);

int main() {
    unsigned int sayi;
    printf("Bir sayi girin: ");
    scanf("%u", &sayi);
    
    unsigned long long sonuc = faktoriyel(sayi);
    
    printf("%u sayisinin faktoriyeli: %llu\n", sayi, sonuc);
    
    return 0;
}

unsigned long long faktoriyel(unsigned int sayi) {
    if (sayi == 0 || sayi == 1)
        return 1;
    else
        return sayi * faktoriyel(sayi - 1);
}
