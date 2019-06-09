#include <stdio.h>
#include <limits.h>

void bin(unsigned n)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2);

    /* step 2 */
    printf("%d", n % 2);
}

int main()
{

    int a = 1;
    int n = a << 31;
    printf("%d \n", n);
    bin(n);
    printf("\n");

    printf("Storage size for int : %lu \n", sizeof(n));

    return 0;
}