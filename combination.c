#include <stdio.h>

int main()
{
    int n, r, ncr(int, int);
    long npr(int, int);
    long double fact(int);
    printf("Enter n and r: \n");
    scanf("%d %d", &n, &r);
    if (n >= r)
    {
        printf("%d\n", ncr(n, r));
    }
    else
    {
        printf("Wrong input? Please enter the correct input");
    }
}
long double fact(int p)
{
    long double facts = 1;
    int i;
    for (i = 1; i <= p; i++)
        facts = facts * i;
    return (facts);
}
int ncr(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}
long npr(int n, int r)
{
    return (fact(n) / fact(n - r));
}