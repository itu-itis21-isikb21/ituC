#include <stdio.h>

int main()
{
    char color[20];
    char object[20];
    char name[20];
    char surname[20];
    printf("Enter a color:\n");
    scanf("%s", color);
    printf("Enter an object:\n");
    scanf("%s", object);
    printf("Enter a celebrity name:\n");
    scanf("%s %s", name, surname);

    printf("Roses are %s\n", color);
    printf("Violets are %s\n", object);
    printf("I love %s %s\n", name, surname);

    return 0;
}