#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name:\n");
    fgets(name, 20, stdin);
    printf("your name is %s\n", name);
    return 0;
}