#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Bir kelime veya cumle girin: ");
    fgets(str, sizeof(str), stdin);
    
    // fgets() fonksiyonu nedeniyle son karakter '\n' olacaktır.
    // Bu karakteri kaldırmak için strcspn() fonksiyonunu kullanabiliriz.
    str[strcspn(str, "\n")] = '\0';
    
    int uzunluk = strlen(str);
    
    printf("Girilen kelimenin veya cumlenin uzunlugu: %d\n", uzunluk);
    
    return 0;
}
