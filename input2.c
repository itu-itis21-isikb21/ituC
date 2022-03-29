#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("your name is %s", name);
    return 0;
    /* üsttekinde tek kelime oluyor, alttakinde fgets komutu içerisinde belirttiğin kadar kelime sınırı oluyor */
    char isim[20];
    printf("Enter your name:\n");
    fgets(isim, 20, stdin);
    printf("your name is %s", isim);
    return 0;
}