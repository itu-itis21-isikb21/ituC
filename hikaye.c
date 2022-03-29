#include <stdio.h>
#include <math.h>

int main()
{
    char characterName[] = "orki";
    char characterSex[] = "gay";
    int characterAge = 31;

    printf("There was once a %s named %s\n", characterSex, characterName);
    printf("He really liked his name.\n");
    printf("But did not like being %d.\n", characterAge);

    characterAge = 69;
    /*
    char grade = 'A';
    tekliler için %c

    double gpa = 3.8;
    ondalıklılar için %f(printf), %lf(scanf)

    [] --> string anlamına geliyor ve birkaç obje koymaya yarıyor. en üstteki variable gibi
    */

    printf("He was %d years old.\n", characterAge);

    return 0;
}